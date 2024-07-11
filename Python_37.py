```
def sort_even(l: list):
    evens = [x for x in l if x % 2 == 0]
    odds = [x for x in l if x % 2 != 0]
    return sorted([x for x in l if x % 2 == 0]) + [x for x in l if x % 2 != 0]