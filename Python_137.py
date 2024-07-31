```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if a > str(b) else None
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if b > str(a) else None
    elif isinstance(a, str) and isinstance(b, str):
        return a if a > b else None
    else:
        return max(a, b) if a != b else None