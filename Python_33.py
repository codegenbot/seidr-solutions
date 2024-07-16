def sort_third(l: list):
    sorted_triplets = sorted(
        [
            sorted(triplet)
            for triplet in zip(
                *[iter([x for x in l if x % 2 != 0 and x is not None])]
                * 3
            )
            if None not in triplet
        ],
        key=lambda x: x[2],
    )
    return sorted_triplets