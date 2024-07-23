```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if a.replace(',', '.').replace(' ', '') > str(b).replace(',', '.').replace(' ', ''):
        else: b
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if b.replace(',', '.').replace(' ', '') > str(a).replace(',', '.').replace(' ', ''):
        else: a
    else:
        return a if a > b: b if a < b: None