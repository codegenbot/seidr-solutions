def sort_third(l: list):
    return [
        (
            (
                i
                if i % 3 != 0
                else sorted(
                    [x for x in chunk[: i // 3 * 3 + min(i % 3, 3 - 1)] if x % 3 == 0]
                )[-1::-1]
            )
            if i % 3 < 2
            or not any(x % 3 == 0 for x in chunk[: i // 3 * 3 + min(i % 3, 3 - 1)])
            else sorted([x for x in l[i // 3 * 3 : i] if x % 3 == 0])[-1::-1]
        )
        for i, chunk in enumerate(zip(*[iter(l)] * (len(l) + 2) // 3))
    ]