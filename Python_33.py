def sort_third(l: list):
    padding = 3 - len(l) % 3
    l += [None] * padding
    sorted_triplets = sorted([sorted([x for x in l[i: i + 3] if x is not None]) for i in range(0, len(l), 3)], key=lambda x: sum(x))
    return [triplet for triplet in sorted_triplets if all(x is not None for x in triplet) and not any(x is None or x % 2 == 0 for x in triplet)]