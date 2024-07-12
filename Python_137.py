def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = (
            str(a)
            .replace(".", "")
            .replace(",", ".")
            .replace("(", "-0")
            .replace(")", "")
        )
        return max(float(a), b) if b < float(a) else b
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = (
            str(b)
            .replace(".", "")
            .replace(",", ".")
            .replace("(", "-0")
            .replace(")", "")
        )
        return max(float(b), a) if a < float(b) else a
    else:
        return None if a == b else max(a, b)