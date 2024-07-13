```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if a.replace('.', '', 1).replace(',', '') > str(b) else None
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if b.replace('.', '', 1).replace(',', '') > str(a) else None
    elif isinstance(a, str) and isinstance(b, str):
        return a if a.replace('.', '', 1).replace(',', '') > b.replace('.', '', 1).replace(',', '') else None
    elif isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return a if a > b else None