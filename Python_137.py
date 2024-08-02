def compare_one(a, b):
    if type(a) == int and type(b) == int:
        if a > b:
            return a
        elif b > a:
            return b
    elif type(a) == float and type(b) == float:
        if a > b:
            return a
        elif b > a:
            return b
    elif type(a) == str and type(b) == str:
        if float(a.replace(',', '.')) > float(b.replace(',', '.')):
            return a
        elif float(b.replace(',', '.')) > float(a.replace(',', '.')):
            return b
    return None