def sort_even(l: list):
    return [
        min(
            [
                x,
                l[i - 1] if i > 0 and x < l[i - 1] else None,
                l[(i + 1) % len(l)] if x < l[(i + 1) % len(l)] else None,
            ]
        )
        for i, x in enumerate(l)
        if x % 2 == 0
    ]