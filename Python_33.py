def sort_third(l: list):
    padding = 3 - len(l) % 3
    l += [None] * padding
    sorted_triplets = [sorted([x for x in l[i : i + 3] if x is not None]) for i in range(0, len(l), 3)]
    return sorted_triplets