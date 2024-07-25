def compare_one(a, b):
    if type(a) == type(b):
        if a == b:
            return None
        else:
            return a if a > b else b
    else:
        return a if type(a) == float else b