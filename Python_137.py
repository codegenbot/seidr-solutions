def compare_one(a, b):
    if type(a) == type(b):
        if a == b:
            return None
        elif a > b:
            return a
        else:
            return b
    elif isinstance(a, str) and isinstance(b, str):
        a = a.replace(",", ".")
        b = b.replace(",", ".")
        if float(a) == float(b):
            return None
        elif float(a) > float(b):
            return a
        else:
            return b
    else:
        return max(a, b)