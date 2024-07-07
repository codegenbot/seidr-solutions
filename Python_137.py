def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = str(a).replace(".", "").replace(",", ".").format(float)
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = str(b).replace(".", "").replace(",", ".")
    try:
        return max(float(a), float(b)) if a != b else None
    except ValueError:
        return max(a, b) if a > b else max(b, a)