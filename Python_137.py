```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, str):
        a = float(''.join(c for c in a.replace(',', '.')))
        b = float(''.join(c for c in b.replace(',', '.')))
    elif isinstance(a, str):
        a = float(a.replace(',', '.'))
    elif isinstance(b, str):
        b = float(b.replace(',', '.'))

    if a > b:
        return a
    elif a < b:
        return b
    else:
        return None