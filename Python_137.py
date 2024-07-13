def compare_one(a, b):
    if type(a) == type(b):
        if a == b:
            return None
        elif a > b:
            return a
        else:
            return b
    elif isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return max(float(a), float(b))
    elif isinstance(a, str) and isinstance(b, str):
        a = a.replace(',', '.')
        b = b.replace(',', '.')
        return max(float(a), float(b))
    else:
        return None