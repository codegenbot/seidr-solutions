def sort_third(l: list):
    sorted_triplets = sorted(
        [
            tuple(l[i:i+3])
            for i in range(0, len(l), 3)
            if all(num % 2 == 1 for num in l[i:i+3])
        ],
        key=lambda x: x[2]
    )
    return sorted_triplets