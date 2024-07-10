```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b
    elif isinstance(a, str) and isinstance(b, str):
        if ',' in a:
            a = float(''.join(filter(str.isdigit, a)).replace(',', '.')) 
        if ',' in b:
            b = float(''.join(filter(str.isdigit, b)).replace(',', '.'))
        return b if b > a else a
    elif a > b:
        return a
    elif b > a:
        return b
    else:
        return None