```
def sort_even(l: list):
    sorted_l = sorted(l)
    odd = [x for x in sorted_l if x % 2 != 0]
    even = [x for x in sorted_l if x % 2 == 0]
    return [x for i, x in enumerate(l) if i % 2 != 0] + sorted(even)