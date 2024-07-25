def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = [x for x in l if x % 2 != 0]
    return [x if i % 2 != 0 else y for (i, x), y in zip_longest(range(len(l)), evens)]