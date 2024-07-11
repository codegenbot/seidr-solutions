def compare_one(a, b):
    if type(a) == type(b):
        if a > b:
            return a
        elif a < b:
            return b
        else:
            return None
    else:
        return max([a, b], key=lambda x: float(x.replace(',', '.')) if isinstance(x, str) else x)