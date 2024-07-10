def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = str(a).replace(".", "").replace(",", ".")
        return a if float(a) > b else b
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = str(b).replace(".", "").replace(",", ".")
        return b if float(b) > a else a
    elif isinstance(a, str) and isinstance(b, str):
        return (
            a
            if a.replace(".", "").replace(",", ".").lower()
            > b.replace(".", "").replace(",", "").lower()
            else b
        )
    else:
        return None if a == b else max(a, b)