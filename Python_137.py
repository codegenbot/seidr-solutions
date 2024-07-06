def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = float(str(a).replace('.', '').replace(',', '.'))
        b = float(b)
    elif isinstance(b, str) and isinstance(a, (int, float)):
        a = float(a)
        b = float(str(b).replace('.', '').replace(',','.'))

    if a > b:
        return a
    elif a < b:
        return b
    else:
        return None