def compare_one(a, b):
    if type(a) == int or type(a) == float:
        if type(b) == int or type(b) == float:
            return max(a, b) if a != b else None
        else:
            return b
    else:
        if type(b) == int or type(b) == float:
            return a
        else:
            return b if a != b else None