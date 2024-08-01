def sort_third(l: list):
    third_sorted = [x for _, x in sorted((i % 3, y) for i, y in enumerate(l))]
    return [third_sorted[i % 3] if i % 3 != 0 else l[i] for i in range(len(l))]