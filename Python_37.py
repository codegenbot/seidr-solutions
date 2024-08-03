```
def sort_even(lst: list):
    even = sorted([x for x in lst if x % 2 == 0])
    odd = [x for x in lst if x % 2 != 0]
    return [y if i % 2 != 0 else x for i, (x, y) in enumerate(sorted(zip(even, odd)))]