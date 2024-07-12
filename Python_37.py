def sort_even(l: list):
    return [
        x if i % 2 != 0 else y
        for i, (x, y) in enumerate(
            zip(sorted(l[i : i + 2]) for i in range(0, len(l), 2))
        )
    ]