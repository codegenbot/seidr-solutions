def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, str):
        if float(a.replace(',', '.')) > float(b.replace(',', '.')):
            return a
        elif float(a.replace(',', '.')) < float(b.replace(',', '.')):
            return b
        else:
            return None
    elif isinstance(a, str):
        if float(a.replace(',', '.')) > b:
            return a
        elif float(a.replace(',', '.')) < b:
            return b
        else:
            return None
    elif isinstance(b, str):
        if a > float(b.replace(',', '.')):
            return a
        elif a < float(b.replace(',', '.')):
            return b
        else:
            return None
    else:
        if a > b:
            return a
        elif a < b:
            return b
        else:
            return None