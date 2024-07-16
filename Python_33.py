def sort_third(l: list):
    sorted_triplets = sorted(
        [
            triplet
            for i in range(0, len(l) - 2, 3)
            if all(num % 2 != 0 for num in l[i:i+3])
        ],
        key=lambda x: x[2]
    )
    return sorted_triplets