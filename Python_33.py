def sort_third(l: list):
    return [
        (
            sum(sorted([x, l[i - 1], l[i + 1]])) / 3
            if 0 < i < len(l) - 1 and (l[i - 1] <= x <= l[i + 1])
            else x
        )
        for i, x in enumerate(l)
    ]