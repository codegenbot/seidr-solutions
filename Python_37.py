def sort_even(l: list):
    even = sorted([i for i in map(int, l) if int(i) % 2 == 0])
    return [i if int(i) % 2 != 0 else j for i, j in zip(even, map(int, l))]