def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b
    elif isinstance(a, str) and isinstance(b, str):
        try:
            a = float(a.replace(',', '.'))
            b = float(b.replace(',', '.'))
        except ValueError:
            if a > b:
                return a
            elif a < b:
                return b
            else:
                return None
    elif isinstance(a, (int, float)) and isinstance(b, (int, float)):
        if a > b:
            return a
        elif a < b:
            return b
        else:
            return None