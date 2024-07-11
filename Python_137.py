```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if float(a.replace(',', '.')) > b else b
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if float(b.replace(',', '.')) > a else None
    elif isinstance(a, str) and isinstance(b, str):
        return b if float(b.replace(',', '.')) > float(a.replace(',', '.')) else None
    elif isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return b if b > a else None