```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = str(a).replace('.', '').replace(',', '.').format('{:.0f}')
        return max(a, str(b).replace('.', '').replace(',', '.')) if (a != '0' or b != '0') else None
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = str(b).replace('.', '').replace(',', '.').format('{:.0f}')
        return max(str(a).replace('.', '').replace(',', '.'), b) if (str(a) != '0' or b != '0') else None
    elif isinstance(a, str) and isinstance(b, str):
        a = float(str(a).replace('.', '').replace(',', '.'))
        b = float(str(b).replace('.', '').replace(',','.'))
        return max(a, b) if a != b else None
    else:
        return max(a, b) if a > b else None