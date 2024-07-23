def sort_even(l: list):
    l.sort(key=lambda x: (abs(x), int(x % 2 == 0)))
    return [x for x in l if x % 2 == 0] + [x for x in l if x % 2 != 0]