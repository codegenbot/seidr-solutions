def sort_even(l: list):
    return [
        (
            i
            if j < len(l) and (j % 2 != 0 or l[i] % 2 == 0)
            else sorted([x for x in l[: i + 1] if (x - l[0]) % 2 == 0])[::-1][i % 2]
        )
        for i, j in enumerate(l)
    ]