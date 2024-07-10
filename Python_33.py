def sort_third(l: list):
    return sorted([i for i in l if i % 3 != 0]) + [
        l[i - 1] for i in range(1, len(l), 3) if (i - 1) % 3 == 0
    ]