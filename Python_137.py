def compare_one(a, b):
    if type(a) == type(b):
        if a == b:
            return None
        elif a > b:
            return a
        else:
            return b
    else:
        if isinstance(a, (int, float)) and isinstance(b, (int, float)):
            if float(str(a).replace(",", ".")) > float(str(b).replace(",", ".")):
                return a
            else:
                return b
        else:
            return b