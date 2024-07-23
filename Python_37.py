```
def sort_even(l: list):
    return sorted([x for x in l if x % 2 == 0]) + [x for x in l if x % 2 != 0]