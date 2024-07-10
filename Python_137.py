```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = str(float(a.replace(',', '.')))
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = str(float(b.replace(',', '.')))
    if a > b:
        return a
    elif b > a:
        return b
    else:
        return None