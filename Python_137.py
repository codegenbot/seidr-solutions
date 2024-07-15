```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = float(str(a).replace(',', '.'))
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = float(str(b).replace(',', '.'))

    if a > b:
        return a
    elif a < b:
        return b
    else:
        return None