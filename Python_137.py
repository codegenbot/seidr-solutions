```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = str(a).replace('.', '').replace(',', '.').format(float)
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = str(b).replace('.', '').replace(',', '.')
    try:
        if a > b:
            return a
        elif b > a:
            return b
        else:
            return None
    except ValueError:
        return max([a, b])