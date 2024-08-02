```
def compare_one(a, b):
    if isinstance(b, str):
        b = float(b.replace(',', '.'))
    elif isinstance(a, str):
        a = float(a.replace(',', '.'))

    if a > b:
        return a
    elif a < b:
        return b
    else:
        return None