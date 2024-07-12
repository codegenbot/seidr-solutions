```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = float(str.replace(str(a), ',', '.'))
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = float(str.replace(str(b), ',', '.'))

    if a > b:
        return a
    elif a < b:
        return b
    else:
        return None