def sort_third(l: list):
    return [
        elem for sublist in sorted(zip(*[iter(l)] * 3)) for i in sublist for elem in [i]
    ]