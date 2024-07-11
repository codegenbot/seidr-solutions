def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted(
                [y for k, y in enumerate(l) if (k - 1) // 3 * 3 + (k % 3) == i - 1 and (k % 3) != 0][::-1]
            )[0]
        )
        for i, x in enumerate(l)
    ]