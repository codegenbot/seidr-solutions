```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if a != 'nan' else None
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if b != 'nan' else None
    elif isinstance(a, str) and isinstance(b, str):
        return max([a, b]) if a != 'nan' and b != 'nan' else None
    elif isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return b if b > a else None