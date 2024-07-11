def sort_even(l: list):
    return [
        x if i % 2 == 0 else y
        for (i, (x, y)) in enumerate(
            sorted(
                (l[i], l[i + 1]) if i < len(l) - 1 else (l[i], None)
                for i in range(0, len(l), 2)
            )
        )
    ]