def compare_one(a, b):
    if type(a) == type(b):
        if a == b:
            return None
        elif a > b:
            return a
        else:
            return b
    elif type(a) == int and type(b) == float:
        return b
    elif type(a) == float and type(b) == int:
        return a
    elif type(a) == str and type(b) == int:
        return b
    elif type(a) == int and type(b) == str:
        return a
    elif type(a) == str and type(b) == float:
        return b
    elif type(a) == float and type(b) == str:
        return a