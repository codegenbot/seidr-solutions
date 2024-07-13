```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if a.replace(',', '.') > str(b).replace(',', '.'): b
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if b.replace(',', '.') > str(a).replace(',', '.'): a
    else:
        if a > b:
            return a
        elif a < b:
            return b
        else:
            return None