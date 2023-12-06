def compare_one(a, b):
    if type(a) == str and type(b) == str:
        a = float(a.replace(",", "."))
        b = float(b.replace(",", "."))
    elif type(a) == str:
        a = float(a.replace(",", "."))
    elif type(b) == str:
        b = float(b.replace(",", "."))
    if a > b:
        return a
    elif b > a:
        return b
    else:
        return None