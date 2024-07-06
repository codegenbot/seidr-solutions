def sort_third(l: list):
    multiples = [i for i in l if i % 3 == 0]
    return [i if i % 3 != 0 else sorted(multiples)[-1] for i in l]