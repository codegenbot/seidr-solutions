```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if a.replace('.', '', 1).replace(',', '.') in [str(i) for i in range(int(float(b)))] else b
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if b.replace('.', '', 1).replace(',', '.') in [str(i) for i in range(int(float(a)))] else a
    elif isinstance(a, str):
        if '.' in a or ',' in a:
            a = float(a)
        if '.' in b or ',' in b:
            b = float(b)
        return a if a > b else None if a == b else b
    elif isinstance(b, str):
        if '.' in b or ',' in b:
            b = float(b)
        if '.' in a or ',' in a:
            a = float(a)
        return b if b > a else None if b == a else a
    elif isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return b if b > a else None if b == a else a