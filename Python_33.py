def sort_third(l: list):
    multiples_of_three = [i for i in l if i % 3 == 0]
    return [i if i % 3 != 0 else min(multiples_of_three) for i in l]