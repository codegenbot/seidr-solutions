```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if a.replace('.', '', 1).replace(',', '') < str(b) else b
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if b.replace('.', '', 1).replace(',', '') < str(a) else a
    elif isinstance(a, str):
        return a if a.replace('.', '', 1).replace(',', '') > b.replace('.', '', 1).replace(',', '') else None
    elif isinstance(b, str):
        return b if b.replace('.', '', 1).replace(',', '') > a.replace('.', '', 1).replace(',', '') else None
    elif a > b:
        return a
    elif a < b:
        return b
    else:
        return None