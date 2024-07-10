def sort_third(l: list):
    result = [x for x in l if isinstance(x, int) and x % 3 == 0]
    return result + sorted([i for i in l if isinstance(i, int) and i % 3 != 0])