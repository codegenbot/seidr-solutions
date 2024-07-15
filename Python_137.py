```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = str(float(''.join(x for x in a.replace(',', ''))))
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = str(float(''.join(x for x in b.replace(',', ''))))
    
    if isinstance(a, str):
        a = float(a)
    if isinstance(b, str):
        b = float(b)

    if a > b:
        return a
    elif a < b:
        return b
    else:
        return None