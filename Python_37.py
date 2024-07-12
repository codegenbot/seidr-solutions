def sort_even(l: list):
    return [
        y if i % 2 != 0 else x
        for i, (x, y) in zip(
            range(len(l)), [(y, x) for _, x in enumerate(l)]
        )
    ]