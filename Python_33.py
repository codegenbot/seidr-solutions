def sort_third(l: list):
    l += [0] * (3 - len(l) % 3) if len(l) % 3 != 0 else []
    sorted_triplets = sorted(
        [
            sorted(l[i : i + 3])
            for i in range(0, len(l), 3)
            if sum(l[i : i + 3]) % 2 == 0 and sum(l[i : i + 3]) % 3 == 0
        ],
        key=lambda x: sum(x),
    )
    return [elem for triplet in sorted_triplets for elem in triplet]