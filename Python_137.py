def compare_one(a, b):
    if a == b:
        return None
    if type(a) == str:
        a = a.replace(',', '.')
    if type(b) == str:
        b = b.replace(',', '.')
    return max(a, b)