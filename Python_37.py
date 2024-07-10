def sort_even(l: list):
    even = sorted([x for i, x in enumerate(l) if i % 2 == 0])
    odd = sorted([x for i, x in enumerate(l) if i % 2 != 0])
    return [x for i, x in zip(range(len(l)), l) if i % 2 == 0] + odd