```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = str(float(''.join([c for c in a.replace(',', '').replace('.', '')])) if ',' in a else a.replace('.', ''))
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = str(float(''.join([c for c in b.replace(',', '').replace('.', '')])) if ',' in b else b.replace('.', ''))
    
    if isinstance(a, str):
        a = float(a.replace(',', '.'))
    if isinstance(b, str):
        b = float(b.replace(',', '.'))

    if a > b:
        return a
    elif a < b:
        return b
    else:
        return None