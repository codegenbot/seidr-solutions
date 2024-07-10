```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = str(a).replace('.', '').replace(',', '.').replace(' ', '')
        return a if float(a) > b else b
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = str(b).replace('.', '').replace(',', '.').replace(' ', '')
        return b if float(b) > a else a
    elif isinstance(a, str) and isinstance(b, str):
        return max([a, b], key=lambda x: float(x.replace('.', '').replace(',', '.')))
    elif isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return a if a > b else None