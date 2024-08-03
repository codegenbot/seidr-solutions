def check(lst, result):
    if isinstance(result, int) and 10 < result < 99:
        return "Ooui"
    elif isinstance(result, int) and (result < 10 or result > 99):
        return "Non"
    else:
        return "Oui"