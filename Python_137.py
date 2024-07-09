def compare_one(a, b):
    if type(a) is int and type(b) is int:
        if a > b:
            return a
        elif b > a:
            return b
        else:
            return None
    elif type(a) is float and type(b) is float:
        if a > b:
            return a
        elif b > a:
            return b
        else:
            return None
    elif type(a) is str and type(b) is str:
        a = a.replace(',', '.')
        b = b.replace(',', '.')
        a = float(a) if '.' in a else int(a)
        b = float(b) if '.' in b else int(b)
        if a > b:
            return a
        elif b > a:
            return b
        else:
            return None
    elif (type(a) is int and type(b) is float) or (type(a) is float and type(b) is int):
        a = float(a)
        if a > b:
            return a
        elif b > a:
            return b
        else:
            return None
    elif (type(a) is int and type(b) is str) or (type(a) is str and type(b) is int):
        b = b.replace(',', '.')
        b = float(b) if '.' in b else int(b)
        if a > b:
            return a
        elif b > a:
            return b
        else:
            return None
    elif (type(a) is float and type(b) is str) or (type(a) is str and type(b) is float):
        a = a.replace(',', '.')
        a = float(a) if '.' in a else int(a)
        if a > b:
            return a
        elif b > a:
            return b
        else:
            return None