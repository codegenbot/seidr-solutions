```
def compare_one(a, b):
    if isinstance(a, str):
        a = float(''.join(c for c in a.replace(',', '')))
    if isinstance(b, str):
        b = float(''.join(c for c in b.replace(',', '')))
    return None if a == b else (a if a > b else b)