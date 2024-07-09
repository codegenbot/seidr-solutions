def compare_one(a, b):
    if type(a) == type(b):
        if a > b:
            return a
        elif b > a:
            return b
        else:
            return None
    else:
        return a if type(a) == int or type(a) == float else b