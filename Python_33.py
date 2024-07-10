def sort_third(l: list):
    result = [x for x in l if x % 3 == 0]
    return result + sorted([i for i in l if i % 3 != 0])