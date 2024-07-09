def sort_even(l: list):
    return [
        (
            x
            if i % 2 != 0
            else [
                y
                for j, y in enumerate(sorted(y for y in l if (l.index(y) + 1) % 2 == 0))
                if j == i // 2
            ][0]
        )
        for i, x in enumerate(l)
    ]