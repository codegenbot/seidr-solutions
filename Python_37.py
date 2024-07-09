def sort_even(l: list):
    return [
        (
            i
            if j < len(l) and (j % 2 != 0 or i >= len(l))
            else sorted([x for x in l[: j + 1] if (j - i) % 2 == 0])[::-1][i % 2]
        )
        for i, j in enumerate(l)
    ]