```
def compare_one(a, b):
    if type(a) == str and type(b) == str:
        a = float(''.join([c for c in a.replace(',', '.')]))
        b = float(''.join([c for c in b.replace(',', '.')]))
    elif type(a) == str:
        a = float(a.replace(',', '.'))
    elif type(b) == str:
        b = float(b.replace(',', '.'))

    if a > b:
        return a
    elif b > a:
        return b
    else:
        return None