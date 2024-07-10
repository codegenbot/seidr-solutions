def sort_even(l: list):
    return [i for pair in zip(*[l[i::2] for i in range(len(l) // 2 + 1)] ) for i in pair]