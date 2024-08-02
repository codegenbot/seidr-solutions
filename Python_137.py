def compare_one(a, b):
    if isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return max(a, b) if a != b else None
    elif isinstance(a, (int, float)) and isinstance(b, str):
        b = b.replace(',', '.')
        return float(b) if a < float(b) else b
    elif isinstance(a, str) and isinstance(b, (int, float)):
        a = a.replace(',', '.')
        return a if float(a) < b else b
    elif isinstance(a, str) and isinstance(b, str):
        a = a.replace(',', '.')
        b = b.replace(',', '.')
        return b if float(a) < float(b) else a