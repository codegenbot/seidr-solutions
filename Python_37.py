def sort_even(l: list):
    return [
        l[i] if i % 2 else sorted([x for x in l if (index := i) % 2 == 0])[index // 2]
        for i, _ in enumerate(l)
    ]