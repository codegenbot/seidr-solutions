def sort_third(l: list):
    third = sorted([i for i in l if i % 3 == 0])
    first = [i for i in l if i % 3 != 0]
    return sorted(first + third)