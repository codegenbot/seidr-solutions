```
def compare_numbers(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = float(a.replace(',', '.')) if ',' in a else int(a)
        return a if a > b else None
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = float(b.replace(',', '.')) if ',' in b else int(b)
        return b if b > a else None
    elif isinstance(a, str) and isinstance(b, str):
        a = float(a.replace(',', '.'))
        b = float(b.replace(',', '.'))
        return a if a > b else None
    elif isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return a if a > b else None
    else:
        return None