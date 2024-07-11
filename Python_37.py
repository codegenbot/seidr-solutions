```
def sort_even(l: list):
    even = sorted([x for x in l if x % 2 == 0])
    return [x if i % 2 else (even[i // 2] if i < len(even) else x) for i, x in enumerate(l)]