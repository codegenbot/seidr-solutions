def sort_third(l: list):
    padded_list = l + [None] * ((3 - len(l) % 3) % 3)
    sorted_triplets = sorted(
        [
            triplet
            for triplet in zip(*[iter([x for x in padded_list if x % 2 != 0 and x is not None])] * 3)
        ],
        key=lambda x: x[2],
    )
    return sorted_triplets