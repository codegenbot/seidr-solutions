def sort_third(l: list):
    sorted_triplets = sorted([sorted(triplet) for triplet in zip(*[iter(sorted([x for x in l if x % 2 == 1 and x is not None]))]*3)], key=lambda x: max(x))
    return sorted_triplets