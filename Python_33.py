def sort_third(l: list):
    return [
        (
            val
            if i % 3 != 0
            else max(x for x in l[:i] + l[i + 1 :] if (x % 3 == 0) and (x < val))
        )
        for i, val in enumerate(l)
    ]