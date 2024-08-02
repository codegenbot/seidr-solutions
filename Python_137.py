def compare_one(a, b):
    if isinstance(a, str):
        a = float(a.replace(",", "."))
    if isinstance(b, str):
        b = float(b.replace(",", "."))
    return max(a, b) if a != b else None