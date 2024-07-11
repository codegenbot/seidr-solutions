def sort_even(l: list):
    return [
        x if i % 2 != 0 else y
        for (i, x), (_, y) in zip(
            range(len(l)), sorted([y for _, y in enumerate(l) if _ % 2 == 0])
        )
    ]