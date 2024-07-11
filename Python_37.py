def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    return [evens[0] if y % 2 != 0 else x for x, y in zip(l, range(len(l)))]