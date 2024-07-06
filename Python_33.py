def sort_third(l: list):
    return [
        (
            i
            if i % 3 != 0
            else sorted([x for x in l if x % 3 == 0 and x != i], key=l.index)[::-1].pop(
                0
            )
        )
        for i in l
    ]