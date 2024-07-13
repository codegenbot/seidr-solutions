def sort_even(l: list):
    return [
        l[i] if i % 2 else sorted([x for x in l if (i // 2) * 2 == j])[-1]
        for j, i in enumerate(l)
    ]