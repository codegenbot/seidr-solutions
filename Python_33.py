def sort_third(l: list):
    result = [i if i % 3 != 0 else next((x for x in l if x % 3 == 0), i) for i in l]
    return result