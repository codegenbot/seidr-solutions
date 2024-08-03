```Python
def sort_even(l: list):
    even = sorted([x for i, x in enumerate(l) if i % 2 == 0])
    odd = [x for i, x in enumerate(l) if i % 2 != 0]
    return [x if i < len(even) else y for i, (x, y) in enumerate(zip(even, odd))]