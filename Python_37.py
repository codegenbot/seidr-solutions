```
def sort_even(l: list):
    even = sorted([x for x in l if x % 2 == 0])
    odd = sorted([x for x in l if x % 2 != 0])
    return tuple(i for i in zip(even, odd)) + (even[-len(odd):] if len(l) % 2 else [])