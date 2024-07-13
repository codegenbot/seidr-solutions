```
def compare_one(a, b):
    if isinstance(b, str):
        try:
            b = float(b.replace(',', '.'))
        except ValueError:
            pass
    else:
        a, b = b, a
    return b if a < b else None if a == b else a