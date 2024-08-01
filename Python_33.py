def sort_third(l: list):
    thirds = [i if i % 3 != 0 else ([x for x in l if x % 3 == 0] or [-1])[0] for i in l]
    return thirds