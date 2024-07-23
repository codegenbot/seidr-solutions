```
def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0], key=lambda x: (x, "even"))
    odds = sorted([x for x in l if x % 2 != 0], key=lambda x: (x, "odd"))
    return [i[0] for i in evens + odds]