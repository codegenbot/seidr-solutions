def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted([y for y in l[:i] + l[i + 1 :] if y % 3 == 0 and y < x])[-1]
        )
        for i, x in enumerate(l)
    ]