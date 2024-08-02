def sort_even(l: list):
    return [
        x if i % 2 != 0 else y
        for (i, x), (_, y) in zip(
            range(len(l)), sorted((x, y) for x, y in zip(l[1::2], l[::2]))
        )
    ]