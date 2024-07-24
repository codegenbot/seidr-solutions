```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if float(a.replace(',', '.')) > b else None
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if float(b.replace(',', '.')) > a else None
    elif isinstance(a, str) and isinstance(b, str):
        return b if float(b.replace(',', '.')) > float(a.replace(',', '.')) else None
    elif a > b:
        return a
    elif b > a:
        return b
    else:
        return None