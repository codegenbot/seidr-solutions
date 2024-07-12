```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = convert_string_to_float(a)
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = convert_string_to_float(b)

    if isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return max(a, b) if a != b else None
    else:
        return max(a, b) if a > b else max(b, a)


def convert_string_to_float(s):
    s = s.replace(',', '.')
    return float(s)