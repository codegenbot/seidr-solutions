def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = [x for x in l if x % 2 != 0]
    return [x if i < len(evens) else evens[i - len(odds)] for i in range(len(l))]