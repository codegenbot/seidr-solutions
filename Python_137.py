```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if float(b) < float(a.replace(',', '')) else b
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if float(a) < float(b.replace(',', '')) else a
    elif isinstance(a, str) and isinstance(b, str):
        return max([a, b], key=lambda x: float(x.replace(',', '')))
    else:
        return None if a == b else (a if a > b else b)