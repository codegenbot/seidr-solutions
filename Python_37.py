```
def sort_even(l: list):
    return [x for x in sorted([i for i in l if i % 2 == 0])] + [x for x in l if x % 2 != 0]