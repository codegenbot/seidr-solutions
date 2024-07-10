def sort_even(l: list):
    even = sorted([x for x in l if x % 2 == 0])
    odd = sorted([x for x in l if x % 2 != 0])
    return [i for pair in zip(even, odd) for i in pair] + [
        i for i in (l if len(l) % 2 else l[:-1]) if i % 2 != 0
    ]