def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b
    elif isinstance(a, str) and isinstance(b, str):
        if "," in a and "," in b:
            a = float("".join(x for x in a if x not in ","))
            b = float("".join(x for x in b if x not in ","))
        else:
            a = float(a.replace(".", "").replace(",", "."))
            b = float(b.replace(".", "").replace(",", "."))
        return str(max(a, b))
    elif isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return str(max(a, b))
    else:
        return None