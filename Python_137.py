def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if a.replace(",", ".") > str(b).replace(",", ".") else None
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if b.replace(",", ".") > str(a).replace(",", ".") else None
    elif type(a) == type(b):
        return a if a > b else None