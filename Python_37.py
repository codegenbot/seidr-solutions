```
def sort_even(l: list):
    even_list = sorted([x for x in l[1::2]])
    return [y if i % 2 != 0 else x for i, x in enumerate(l)]