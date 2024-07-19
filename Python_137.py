def compare_one(a, b):
    if type(a) == type(b):
        if a == b:
            return None
        return a if a > b else b
    return a if type(a) == int or type(a) == float and type(b) == str else b