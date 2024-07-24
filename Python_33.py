```
def sort_third(l: list):
    zeroth = [i for i in l if i % 3 == 0]
    first = [i for i in l if i % 3 == 1]
    second = [i for i in l if i % 3 == 2]
    return sorted(zeroth) + first + sorted(second)