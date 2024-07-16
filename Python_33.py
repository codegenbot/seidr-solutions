def sort_third(l: list):
    sorted_triplets = sorted(
        [
            (l[i], l[i+1], l[i+2])
            for i in range(0, len(l) - 2, 3)
            if all(num % 2 != 0 for num in l[i:i+3])
        ],
        key=lambda x: x[2]
    )
    return sorted_triplets