```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if float(b) < float(a.replace(',', '.')) else b
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if float(a) < float(b.replace(',', '.')) else a
    elif isinstance(a, str) and isinstance(b, str):
        return a if a > b else b
    elif a == b:
        return None
    else:
        return a if a > b else b