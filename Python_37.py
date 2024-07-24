def sort_even(l: list):
    return [
        l[i] if i % 2 else sorted([x for x in l[::2]])[j // 2]
        for j, i in enumerate(range(len(l) - 1, -1, -1))
    ]