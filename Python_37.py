def sort_even(l: list):
    return [
        x if i % 2 != 0 else y
        for (i, x), (_, y) in zip(
            range(len(l)), sorted((y, x) for x, y in enumerate(l) if i % 2 == 0)
        )
    ]