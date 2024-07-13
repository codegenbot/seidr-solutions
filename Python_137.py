```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b
    elif isinstance(a, str) and isinstance(b, str):
        if '.' in a or ',' in a:
            a = float(a.replace(',', '.'))
        if '.' in b or ',' in b:
            b = float(b.replace(',', '.'))
        if a == b:
            return None
        else:
            return a if a > b else b
    elif isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return a if a > b else b