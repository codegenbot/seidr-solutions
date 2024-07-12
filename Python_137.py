```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if float(a.replace(',', '.')) > b else None
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if float(b.replace(',', '.')) > a else None
    elif isinstance(a, str) and isinstance(b, str):
        return max([a, b]) if float(a.replace(',', '.')) > float(b.replace(',', '.')) else None
    else:
        return max((a, b)) if (isinstance(a, (int, float)) and a > b) or (isinstance(b, (int, float)) and b > a) else None