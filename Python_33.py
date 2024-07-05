def sort_third(l):
    return [
        (
            i
            if i % 3 != 0
            else min(
                (x for x in l[: ((min(len(l), i + 2)) // 3) * 3] if x % 3 != 0),
                default=None,
            )
        )
        for i in range(len(l))
    ]