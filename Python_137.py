```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = str(a).replace('.', '').replace(',', '.').format(float)
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = str(b).replace('.', '').replace(',', '.')
    elif isinstance(a, str) and isinstance(b, str):
        if float(a.replace('.', '').replace(',', '.')) > float(b.replace('.', '').replace(',', '.')):
            return a
        elif float(a.replace('.', '').replace(',', '.')) < float(b.replace('.', '').replace(',', '.')):
            return b
        else:
            return None
    elif isinstance(a, (int, float)) and isinstance(b, (int, float)):
        if a > b:
            return a
        elif a < b:
            return b
        else:
            return None