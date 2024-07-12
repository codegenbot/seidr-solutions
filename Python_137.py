```
def compare_one(a, b):
    if isinstance(a, str):
        a = float(''.join(c for c in a.replace(',', ''))) if ',' in a else float(a)
    if isinstance(b, str):
        b = float(''.join(c for c in b.replace(',', ''))) if ',' in b else float(b)

    if a > b:
        return a
    elif a < b:
        return b
    else:
        return None