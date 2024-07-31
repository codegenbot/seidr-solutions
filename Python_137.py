```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if a != '0' else None
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if b != '0' else None
    elif isinstance(a, str) and isinstance(b, str):
        return max([a, b]) if [a, b][0] != '0' else None
    else:
        return max((a, b)) if a != 0 or b != 0 else None