def compare_one(a, b):
    if type(a) == type(b):
        if a == b:
            return None
        return a if a > b else b
    return a if isinstance(a, (int, float)) and isinstance(b, (int, float)) else b