def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, str):
        if a.replace(",", ".") == b.replace(",", "."):
            return None
        elif float(a.replace(",", ".")) > float(b.replace(",", ".")):
            return a
        else:
            return b
    elif isinstance(a, str):
        if float(a.replace(",", ".")) > b:
            return a
        else:
            return b
    elif isinstance(b, str):
        if a > float(b.replace(",", ".")):
            return a
        else:
            return b
    else:
        if a > b:
            return a
        elif a < b:
            return b
        else:
            return None