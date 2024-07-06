def compare_one(a, b):
    if type(a) == str and type(b) == float:
        a = float(a.replace(",", "."))
    elif type(a) == float and type(b) == str:
        b = float(b.replace(",", "."))
    if a > b:
        return a
    elif a < b:
        return b
    else:
        return None