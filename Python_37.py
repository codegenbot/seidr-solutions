def sort_even(l: list):
    return [
        i if i % 2 != 0 else j for j in sorted([x for x in l if x % 2 == 0]) for i in l
    ]