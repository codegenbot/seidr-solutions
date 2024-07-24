def sort_third(l: list):
    return [i if i % 3 != 0 else x for j, i in enumerate(l) if i % 3 == 0]