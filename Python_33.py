def sort_third(l: list):
    l_copy = [i for i in l if i % 3 != 0]
    multiples_of_three = [x for x in l if x % 3 == 0]
    return sorted(multiples_of_three) + l_copy