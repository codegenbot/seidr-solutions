def sort_even(l: list):
    evens = sorted([x for x in l if 0 <= x % 2])
    odds = sorted([x for x in l if x % 2 != 0], reverse=True)
    return list(zip(evens, odds))