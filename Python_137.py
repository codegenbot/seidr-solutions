```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if a.replace(",", ".") < str(b) else b
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if b.replace(",", ".") < str(a) else a
    elif isinstance(a, str) and isinstance(b, str):
        return max(a, b)
    elif a > b:
        return a
    elif b > a:
        return b
    else:
        return None