def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else [
                y
                for y in sorted(
                    [z for z in l if (i - l.index(z)) % 3 == 2], reverse=True
                )
            ][0]
        )
        for i, x in enumerate(l)
    ]