def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = float(a.replace(',', '.'))
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = float(b.replace(',', '.'))

    if a > b:
        return f"{a} is greater than {b}"
    elif b > a:
        return f"{b} is greater than {a}"
    else:
        return f"{a} and {b} are equal"