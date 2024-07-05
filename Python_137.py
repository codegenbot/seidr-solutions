def compare_one(a, b):
    def to_float(val):
        if isinstance(val, str):
            val = val.replace(',', '.')
        return float(val)
    
    if to_float(a) == to_float(b):
        return None
    return a if to_float(a) > to_float(b) else b