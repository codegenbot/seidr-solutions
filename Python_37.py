def sort_even(l: list):
    return [i if i % 2 != 0 else j for j in sorted([i for i in l if i % 2 == 0])]