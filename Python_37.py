```
def sort_even(l: list):
    evens = [x for x in l if x % 2 == 0]
    odds = [x for x in l if x % 2 != 0]
    return [min(evens) if i < len(evens) else next(iter(odds)) for i, _ in enumerate(l)]