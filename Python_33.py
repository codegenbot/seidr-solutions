def sort_third(l: list):
    multiples_of_3 = [i for i in l if i % 3 == 0]
    return [i if i % 3 != 0 else next(sorted(multiples_of_3)) for i in l]