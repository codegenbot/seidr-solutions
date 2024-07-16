def sort_third(l: list):
    sorted_triplets = sorted(
        [
            sorted(l[i : i + 3])
            for i in range(0, len(l), 3)
            if sum(l[i : i + 3]) % 2 == 0 and len(l[i : i + 3]) == 3
        ],
        key=lambda x: sum(x),
    )
    return [elem for triplet in sorted_triplets for elem in triplet]