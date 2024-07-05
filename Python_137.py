def compare_one(a, b):
    def convert(val):
        if isinstance(val, str):
            val = val.replace(',', '.')
            return float(val) if '.' in val else int(val)
        return val
    
    a_converted, b_converted = convert(a), convert(b)
    
    if a_converted > b_converted:
        return a
    elif b_converted > a_converted:
        return b
    else:
        return None