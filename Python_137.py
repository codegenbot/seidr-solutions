def compare_one(a, b):
    if isinstance(b, str):
        b = float(b.replace(",", "."))
    if isinstance(a, str):
        a = float(a.replace(",", "."))
    return max((a, b)) if a != b else None