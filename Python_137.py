def compare_one(a, b):
    if type(a) == type(b):
        if a == b:
            return None
        return a if a > b else b
    return a if type(a) != str else b