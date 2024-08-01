def sort_third(l: list):
    return [
        (
            val
            if i % 3 != 0
            else max([x for x in l[:i // 3 * 3 + (i + 1) % 3:] if x % 3 != 0])
        )
        for i, val in enumerate(l)
    ]