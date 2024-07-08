def sort_third(l: list):
    return [
        (
            val
            if i % 3 != 0
            else (
                sorted([x for x in l[:i] + l[i + 1 :] if x % 3 == 0])[-1]
                if any(x % 3 == 0 for x in l[i : i + 3])
                else val
            )
        )
        for i, val in enumerate(l)
    ]