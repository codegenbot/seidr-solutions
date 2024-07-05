def compare_one(a, b):
    def to_float(val):
        if isinstance(val, str):
            val = val.replace(',', '.')
        return float(val)
    
    if to_float(a) > to_float(b):
        return a
    elif to_float(a) < to_float(b):
        return b
    else:
        return None