def sort_even(l: list):
    return sorted([i for i in l if i % 2 == 0] + [i for i in l if i % 2 != 0], reverse=True)