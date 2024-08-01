def sort_even(l: list):
    return [
        x if i % 2 != 0 else sorted([y for y in l if i // 2 * 2 == idx])[0]
        for i, x in enumerate(l)
        for idx in range(len(l))
        if i // 2 * 2 == idx
    ]