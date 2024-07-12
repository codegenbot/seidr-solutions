def sort_even(l: list):
    return [
        x if i % 2 != 0 else y
        for i, (x, y) in zip(
            range(len(l)), [(y, x) for _, x in enumerate(l)]
        )
    ]