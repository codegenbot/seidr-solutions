```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, str):
        a = float(a.replace(',', '.')) if ',' in a else float(a)
        b = float(b.replace(',', '.')) if ',' in b else float(b)
    elif not isinstance(a, str):
        b = float(b) if isinstance(b, str) else b
    return None if a == b else (a if a > b else b)