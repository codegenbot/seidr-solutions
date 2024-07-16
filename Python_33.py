def sort_third(l: list[int]) -> list[list[int]]:
    padding = 3 - len(l) % 3
    l += [None] * padding
    sorted_triplets = [sorted([x for x in l[i : i + 3] if x is not None]) for i in range(0, len(l), 3)]
    return [triplet for triplet in sorted_triplets if all(x is not None for x in triplet)]