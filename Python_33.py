def sort_third(l: list):
    multiples_of_three = [x for x in l if x % 3 == 0]
    return [i if i % 3 != 0 else max(multiples_of_three) for i in l]