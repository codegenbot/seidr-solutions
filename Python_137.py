```
def compare_one(a, b):
    if type(a) == str:
        a = float(a.replace(",", ".").replace(".", ""))
    if type(b) == str:
        b = float(b.replace(",", ".").replace(".", ""))
    if a > b:
        return a
    elif a < b:
        return b
    else:
        return None