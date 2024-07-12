```
def sort_even(l: list):
    evens = [x for i, x in enumerate(l) if i % 2 == 0]
    odds = [x for i, x in enumerate(l) if i % 2 != 0]
    return sorted(evens) + odds