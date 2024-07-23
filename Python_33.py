```
def sort_third(l: list):
    third = [i for i in l if i % 3 == 0]
    first = [i for i in l if i % 3 != 0]
    return sorted([i if i not in third else min(third) for i in (first + third)])