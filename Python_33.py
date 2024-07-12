def sort_third(l: list):
    return [
        i if i % 3 != 0 else sorted([x for x in l if (index := i) % 3 == 0])[0]
        for index, i in enumerate(l)
    ]