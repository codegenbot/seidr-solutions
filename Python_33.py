def sort_third(l: list):
    return sorted(
        [
            (
                i
                if i % 3 != 0
                else (
                    [x for x in l if x % 3 == 0].pop(0)
                    if any(x % 3 == 0 for x in l)
                    else float("inf")
                )
            )
            for i in l
        ]
    )