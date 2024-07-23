def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = sorted([x for x in l if x % 2 != 0])
    return tuple(even + [odds[i] if i < len(odds) else None for i in range(len(evens))])