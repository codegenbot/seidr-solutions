```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = float(a.replace(",", "."))
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = float(b.replace(",", "."))
    elif isinstance(a, str) and isinstance(b, str):
        a = float(a.replace(",", "."))
        b = float(b.replace(",", "."))
    result = None
    if a > b:
        result = a
    return result