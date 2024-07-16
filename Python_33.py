def sort_third(l: list):
    sorted_triplets = sorted(
        [
            triplet
            for triplet in zip(*[iter([x for x in l if x is not None])]*3)
            if len(triplet) == 3 and all(num % 2 != 0 for num in triplet)
        ],
        key=lambda x: x[2]
    )
    return sorted_triplets