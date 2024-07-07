```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = str(a).replace('.', '').replace(',', '.').replace(' ', '')
        return a if float(a) > b else None
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = str(b).replace('.', '').replace(',', '.').replace(' ', '')
        return b if float(b) > a else None
    elif isinstance(a, str):
        a = str(a).replace('.', '').replace(',', '.').replace(' ', '')
        b = str(b).replace('.', '').replace(',', '.').replace(' ', '')
        return a if float(a) > float(b) else None
    else:
        return b if isinstance(b, (int, float)) and b > a else None