def compare_one(a, b):
    if type(a) == type(b):
        if a == b:
            return None
        elif a > b:
            return a
        else:
            return b
    elif type(a) == int or type(a) == float:
        if type(b) == int or type(b) == float:
            if a == b:
                return None
            elif a > b:
                return a
            else:
                return b
        else:
            return a
    elif type(b) == int or type(b) == float:
        return b
    else:
        return a