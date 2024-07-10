```
def sort_even(l: list):
    even = sorted([x for x in l if x % 2 == 0])
    odd = sorted([x for x in l if x % 2 != 0], reverse=True)

    max_len = max(len(even), len(odd))
    even += [0] * (max_len - len(even))
    odd += [0] * (max_len - len(odd))

    return tuple(i for i in zip_longest(even, odd))