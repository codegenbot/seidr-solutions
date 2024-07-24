def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted(
                [
                    y
                    for y in l[: i // 3 * 3 + i % 3 :] + l[i // 3 * 3 + len(l) // 3 :]
                    if y < x
                ]
            )[0]
        )
        for i, x in enumerate(l)
    ]