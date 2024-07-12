```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = str(a).replace('.', '').replace(',', '.').format('{:.0f}')
        return a if float(a) > b else None
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = str(b).replace('.', '').replace(',', '.').format('{:.0f}')
        return b if float(b) > a else None
    elif isinstance(a, str) and isinstance(b, str):
        return b if float(b.replace('.', '').replace(',', '.')) > float(a.replace('.', '').replace(',', '.')) else None
    elif a > b:
        return a
    elif b > a:
        return b
    else:
        return None