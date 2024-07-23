def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = [x for x in l if x % 2 != 0]
    return [x if x % 2 != 0 else evens.pop(0) for x in l]