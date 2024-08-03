```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, str):
        a = float(''.join([i for i in a.replace(',', '.')]))
        b = float(''.join([i for i in b.replace(',', '.')]))
    elif not isinstance(a, str) and not isinstance(b, str):
        if a > b:
            return a
        else:
            return b
    elif a > b:
        return a
    elif a == b:
        return None
    else:
        return b