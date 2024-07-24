def sort_even(l: list):
    evens = sorted([x for x in l if 0 <= x % 2])
    odds = [x for x in l if abs(x) % 2 != 0 and x not in evens]
    result = evens + sorted(odds, reverse=True)
    return tuple(result)