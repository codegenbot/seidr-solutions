def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = sorted([x for x in l if x % 2 != 0])
    return [i for pair in zip(evens, range(len(odds))) for i in pair]