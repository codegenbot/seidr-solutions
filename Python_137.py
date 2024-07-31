```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = [float(x.replace(',', '.')) for x in a.split('.')]
        a = sum([x[1:] for x in a]) + float('0.' + a[0][:-1])
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = [float(x.replace(',', '.')) for x in b.split('.')]
        b = sum([x[1:] for x in b]) + float('0.' + b[0][:-1])
    if a > b:
        return a
    elif b > a:
        return b
    else:
        return None