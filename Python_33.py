def sort_third(l: list):
    sorted_triplets = sorted(
        [
            l[i:i+3]
            for i in range(0, len(l) - 2, 3)
            if l[i:i+3][-1] % 2 != 0
        ],
        key=lambda x: x[-1]
    )
    return sorted_triplets