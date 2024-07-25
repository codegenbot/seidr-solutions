def compare_one(a, b):
    if type(a) != type(b):
        return max(a, b)
    if type(a) == int:
        return max(a, b) if a != b else None
    if type(a) == float:
        return max(a, b) if a != b else None
    if type(a) == str:
        a = a.replace(',', '.')
        b = b.replace(',', '.')
        return max(float(a), float(b)) if float(a) != float(b) else None