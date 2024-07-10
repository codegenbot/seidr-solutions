```
def sort_even(l: list):
    evens = sorted([x for i, x in enumerate(l) if i % 2 == 0])
    odds = [x for i, x in enumerate(l) if i % 2 != 0]
    
    return tuple(evens + sorted(odds))