Here is the modified code:

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
        return b if a < b else a if a > b else None
    elif a > b:
        return a
    elif a < b:
        return b
    else:
        return None