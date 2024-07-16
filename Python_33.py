def sort_third(l: list):
    sorted_triplets = sorted(
        [
            sorted(l[i : i + 3])
            for i in range(0, len(l), 3)
            if len(l[i : i + 3]) == 3 and sum(l[i : i + 3]) % 2 == 0 and all(elem % 2 == 0 for elem in l[i : i + 3])
        ],
        key=lambda x: sum(x),
    )
    return [elem for sublist in sorted_triplets for elem in sublist]