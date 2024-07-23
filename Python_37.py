```
def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = [x for x in l if x % 2 != 0]
    return [x for pair in zip(evens, odds) for x in pair] + evens[len(odds):]