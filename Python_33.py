def sort_third(l: list):
    return [
        (
            i
            if i % 3 != 0
            else sorted([x for x in l if (x % 3 == 0 and i == idx) or i % 3 != 0])[-1]
        )
        for idx, i in enumerate(l)
    ]