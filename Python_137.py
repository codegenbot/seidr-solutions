def compare_one(a, b):
    if type(a) == type(b):
        if a > b:
            return a
        elif b > a:
            return b
        else:
            return None
    else:
        return max(float(a.replace(',', '.')), float(b.replace(',', '.'))) if type(a) == str or type(b) == str else None