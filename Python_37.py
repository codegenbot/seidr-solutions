def sort_even(l: list):
    return [i if i % 2 != 0 else j for j, i in sorted((j, i) for j, i in enumerate(l)) if i % 2 == 0]