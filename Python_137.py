def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = float(a.replace(",", ".")) 
        return a if a > b else None if a == b else -1
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = float(b.replace(",", ".")) 
        return b if b > a else None if b == a else 1
    elif isinstance(a, str) and isinstance(b, str):
        a = float(a.replace(",", ".")) 
        b = float(b.replace(",", ".")) 
        return -1 if a < b else 1 if a > b else None
    elif isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return 1 if a < b else -1 if a > b else None