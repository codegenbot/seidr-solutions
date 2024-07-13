def sort_even(l: list):
    return [
        (
            i
            if j % 2 != 0
            else sorted([x for x in l if (index := j) % 2 == 0])[::-1][index % 2]
        )
        for j, i in enumerate(l)
    ]