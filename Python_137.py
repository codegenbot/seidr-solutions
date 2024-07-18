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
        a_num = float(a.replace(',', '.'))
        b_num = float(b.replace(',', '.'))
        if a_num > b_num:
            return a
        elif b_num > a_num:
            return b
        else:
            return None
    elif (type(a) == int and type(b) == float) or (type(a) == float and type(b) == int):
        return max(a, b)
    elif (type(a) == int and type(b) == str) or (type(a) == str and type(b) == int):
        a_num = float(a.replace(',', '.'))
        if a_num > b:
            return a
        elif b > a_num:
            return b
        else:
            return None
    elif (type(a) == float and type(b) == str) or (type(a) == str and type(b) == float):
        b_num = float(b.replace(',', '.'))
        if a > b_num:
            return a
        elif b_num > a:
            return b
        else:
            return None