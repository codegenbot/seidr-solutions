```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b
    elif isinstance(a, str) and isinstance(b, str):
        a = a.replace(',', '.').replace('.', ',')
        b = b.replace(',', '.').replace('.', ',')
        if a != b:
            return a if float(a) > float(b) else b
        else:
            return None