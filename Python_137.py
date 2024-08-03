```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = convert_string_to_float(a)
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = convert_string_to_float(b)

    if a > b:
        return a
    elif a < b:
        return b
    else:
        return None

def convert_string_to_float(s):
    s = s.replace(",", ".")
    return float(s)