def check(lst):
    return (sum(i**2 for i in lst if isinstance(i, int) and i > 0) * 2 - max(lst))