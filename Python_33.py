def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else (
                sorted(
                    [
                        y
                        for y in l[
                            max(0, i // 3 * 3 + (i % 3) * 3) : min(i + 1, len(l))
                        ]
                    ]
                )[0]
                if i // 3 * 3 + (i % 3) * 3 < len(l)
                else None
            )
        )
        for i, x in enumerate(l)
    ]