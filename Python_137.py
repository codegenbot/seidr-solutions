```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = float(str(a).replace(',', '.'))
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = float(str(b).replace(',', '.'))

    if isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return a if a > b else b if a < b else None
    elif isinstance(a, str) and isinstance(b, str):
        return a if a > b else b if a < b else None
    elif isinstance(a, (int, float)) and isinstance(b, str):
        return b
    elif isinstance(a, str) and isinstance(b, (int, float)):
        return a