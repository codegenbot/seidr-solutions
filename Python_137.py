def compare_one(a, b):
    if type(a) == int and type(b) == int:
        if a > b:
            return a
        elif b > a:
            return b
        else:
            return None
    elif type(a) == float and type(b) == float:
        if a > b:
            return a
        elif b > a:
            return b
        else:
            return None
    elif type(a) == str and type(b) == str:
        a = a.replace(',', '.')
        b = b.replace(',', '.')
        if float(a) > float(b):
            return a
        elif float(b) > float(a):
            return b
        else:
            return None
    elif type(a) == int and type(b) == str:
        b = b.replace(',', '.')
        if a > float(b):
            return a
        elif float(b) > a:
            return b
        else:
            return None
    elif type(a) == str and type(b) == int:
        a = a.replace(',', '.')
        if float(a) > b:
            return a
        elif b > float(a):
            return b
        else:
            return None