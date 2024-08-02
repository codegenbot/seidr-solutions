def compare_one(a, b):
    if a == b:
        return None
    elif (isinstance(a, int) or isinstance(a, float)) and (isinstance(b, int) or isinstance(b, float)):
        return max(a, b)
    elif isinstance(a, str) and isinstance(b, str):
        a = a.replace(',', '.')
        b = b.replace(',', '.')
        return max(float(a), float(b))
    else:
        return max(a, b)