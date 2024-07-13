def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted([y for j, y in enumerate(l) if (j + 1) % 3 == 0])[i % 3 - 1]
        )
        for i, x in enumerate(l)
    ]