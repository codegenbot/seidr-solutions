def compare_one(a, b):
    def to_float(x):
        if isinstance(x, str):
            x = x.replace(',', '.')
        return float(x)
    
    if to_float(a) == to_float(b):
        return None
    return a if to_float(a) > to_float(b) else b