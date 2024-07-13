def sort_even(l: list):
    return [
        (
            i
            if j % 2 != 0
            else sorted(
                [x for x in l if (j // 2) * 2 <= i and (j // 2) * 2 + 1 < i + 1]
            )[0]
        )
        for i, j in enumerate(l)
    ]