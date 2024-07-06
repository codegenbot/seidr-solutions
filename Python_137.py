def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = str(float(a.replace(",", ".")))
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = str(float(b.replace(",", ".")))

    if isinstance(a, str) and isinstance(b, str):
        return max(a, b)
    elif isinstance(a, (int, float)) and isinstance(b, (int, float)):
        if a > b:
            return a
        elif a < b:
            return b
        else:
            return None