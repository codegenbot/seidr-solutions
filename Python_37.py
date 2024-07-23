def sort_even(l: list):
    evens = sorted([x for x in l if abs(x) % 2 == 0])
    odds = [x for x in l if abs(x) % 2 != 0]
    return evens + odds