```
def compare_one(a, b):
    if isinstance(a, str):
        a = float(''.join(filter(str.isdigit, a.replace(',', '.'))))
    if isinstance(b, str):
        b = float(''.join(filter(str.isdigit, b.replace(',', '.'))))
    if a > b:
        return a
    elif b > a:
        return b
    else:
        return None