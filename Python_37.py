```Python
def sort_even(l: list):
    return sorted([x for x in l if x % 2 == 0], key=lambda x: (l.index(x) // 2, x)) + [x for x in l if x % 2 != 0]