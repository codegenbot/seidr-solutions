def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = sorted([x for x in l if x % 2 != 0])
    return [(e, o) if i < len(evens) else (None, o) for i, (e, o) in enumerate(zip_longest(evens, odds))]