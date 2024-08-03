def sort_even(l: list):
    return [
        l[i] if i % 2 != 0 else sorted([x for x in l if (i // 2) * 2 == i])[0]
        for i in range(len(l))
    ]