```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if "." in a or "," in a else b
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if "." in b or "," in b else a
    elif isinstance(a, str) and isinstance(b, str):
        return a if a > b else b
    elif isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return a if a > b else None