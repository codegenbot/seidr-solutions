def sort_third(lst: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted([y for j, y in enumerate(lst) if (j) % 3 != 0])[::-1][0]
        )
        for i, x in enumerate(lst)
    ]