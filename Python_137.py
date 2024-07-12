```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = convert_string_to_number(a)
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = convert_string_to_number(b)

    if a > b:
        return a
    elif b > a:
        return b
    else:
        return None

def convert_string_to_number(s):
    s = s.replace('.', '').replace(',', '.')
    return float(s)