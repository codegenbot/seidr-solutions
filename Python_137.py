def compare_one(a, b):
    if type(a) == type(b):
        if a == b:
            return None
        elif a > b:
            return a
        else:
            return b
    elif isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return max(a, b)
    elif isinstance(a, str) and isinstance(b, str):
        a_num = float(a.replace(',', '.'))
        b_num = float(b.replace(',', '.'))
        if a_num == b_num:
            return None
        elif a_num > b_num:
            return a
        else:
            return b
    elif isinstance(a, str) and isinstance(b, (int, float)):
        a_num = float(a.replace(',', '.'))
        if a_num == b:
            return None
        elif a_num > b:
            return a
        else:
            return b
    elif isinstance(a, (int, float)) and isinstance(b, str):
        b_num = float(b.replace(',', '.'))
        if a == b_num:
            return None
        elif a > b_num:
            return a
        else:
            return b