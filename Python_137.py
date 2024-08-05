def compare_one(a, b):
    if type(a) != type(b):
        return max(a, b)
    elif isinstance(a, int) or isinstance(a, float):
        return max(a, b)
    else:
        a = a.replace(',', '.')
        b = b.replace(',', '.')
        if float(a) == float(b):
            return None
        else:
            return max(a, b)