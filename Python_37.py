```
def sort_even(l: list):
    l.sort(key=lambda x: (x % 2, x))
    return l