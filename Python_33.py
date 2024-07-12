def sort_third(lst):
    return [
        (
            x
            if i % 3 != 0
            else sorted(
                [y for y in lst if y != x and (lst.index(y) - lst.index(x)) % 3 != 0]
            )[::-1][0]
        )
        for i, x in enumerate(lst)
    ]