```
def sort_even(l: list):
    return sorted([abs(x) for x in l if x % 2 == 0])