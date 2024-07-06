def sort_third(l: list):
    return [
        l[i] if i % 3 != 0 else min(sorted([l[j] for j in range(i, len(l), 3)]))
        for i in range(len(l))
    ]