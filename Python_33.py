def sort_third(l: list):
    return [
        (
            i
            if i % 3 != 0
            else sorted(
                [x for x in l[: i // 3 * 3 + i % 3 :] + l[i // 3 * 3 + 1 :]][::-1]
            )
        )
        for i in range(len(l))
    ]