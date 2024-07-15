def compare_one(a, b):
    if a == b:
        return None
    if type(a) == int or type(a) == float:
        if type(b) == int or type(b) == float:
            return max(a, b)
    return b if a == str(a) else a