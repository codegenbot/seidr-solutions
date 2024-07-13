def sort_third(l: list):
    return [
        (
            sorted([i for i in l if (index := j) % 3 == 0])[k]
            if (j := index) % 3 == 0
            else i
        )
        for j, i in enumerate(l)
    ]