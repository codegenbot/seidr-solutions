def check(func, lst):
    result = func(lst)
    if result > 10:
        return "High"
    elif result < -5:
        return "Low"
    else:
        return "Normal"