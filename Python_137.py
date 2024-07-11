def compare_one(a, b):
    def to_num(s):
        s = str(s).replace(".", "").replace(",", ".")
        if s == "0":
            return 0
        return float(s)

    a, b = map(to_num, (a, b))

    if isinstance(a, int) and isinstance(b, str):
        return max(a, to_num(b)) if a > 0 else None
    elif isinstance(b, int) and isinstance(a, str):
        return max(to_num(a), b) if b > 0 else None
    elif isinstance(a, str) and isinstance(b, str):
        return max(a, b) if to_num(a) != to_num(b) else None
    else:
        return max(a, b)