def sort_even(l: list):
    return [
        j for i, j in sorted((i, j) for j, i in enumerate(l)) if i % 2 == 0
    ]