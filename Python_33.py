def sort_third(l: list):
    return [val for val in l if val % 3 == 0] + [val for val in l if val % 3 != 0]