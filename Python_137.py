```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = float(str(a).replace(',', '.'))
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = float(str(b).replace(',', '.'))

    if isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return max(a, b)
    else:
        return max(a, b) if a > b else max(b, a) if b > a else None