def sort_even(l: list):
    return [
        i if i % 2 != 0 else sorted([x for x in l if (index := j) % 2 == 0])[j // 2]
        for j, i in enumerate(l)
    ]