```
def sort_third(l: list):
    l.sort()
    third = [i for i in l if i % 3 == 0]
    first = [i for i in l if i % 3 != 0]
    return [i for i in first + third if i in l] + sorted([i for i in third])