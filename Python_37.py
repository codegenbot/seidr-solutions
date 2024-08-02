def sort_even(l: list):
    return [
        i if i % 2 else sorted([x for x in l[1::2]])[j - 1] for j, i in enumerate(l)
    ]