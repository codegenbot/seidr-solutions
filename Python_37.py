def sort_even(l: list):
    evens = {}
    for i, x in enumerate(l):
        if x % 2 == 0:
            evens[i] = x
    return [
        evens.get(i, x) if i % 2 != 0 else [y for y in sorted(list(evens.values())) if y % 2 == 0][i // 2]
        for i, x in enumerate(l)
    ]