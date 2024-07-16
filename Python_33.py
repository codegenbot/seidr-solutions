def sort_third(l: list):
    sorted_triplets = sorted(
        [
            sorted(l[i : i + 3])
            for i in range(0, len(l) - 2, 3)
            if sum(sorted(l[i : i + 3])) % 2 == 0
        ],
        key=lambda x: sum(x),
    )
    return [elem for sublist in sorted_triplets for elem in sublist]