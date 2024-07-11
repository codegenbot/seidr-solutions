```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if a.replace(',', '.') > str(b).replace(',', '.').format() else None
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if str(a).replace(',', '.').format() < b.replace(',', '.') else None
    elif isinstance(a, str) and isinstance(b, str):
        return a if a.replace(',', '.') > b.replace(',', '.') else None
    elif isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return a if a > b else None