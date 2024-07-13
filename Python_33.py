def sort_third(l: list):
    return [
        (
            sorted([i for i in l if (index := i // 3) * 3 == j])[0]
            if (j := i) % 3 == 0
            else i
        )
        for i, j in enumerate(l)
    ]