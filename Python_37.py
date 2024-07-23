def sort_even(l: list):
    l.sort()
    evens = [x for x in l if x % 2 == 0]
    odds = [x for x in l if x % 2 != 0]
    return evens + odds