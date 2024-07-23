def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = str(a).replace(",", ".")
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = str(b).replace(",", ".")
    try:
        result = max(float(a), float(b))
        if a == str(result) or b == str(result):
            return None
        return result
    except ValueError:
        return max(a, b)