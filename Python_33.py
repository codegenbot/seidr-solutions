def sort_third(l: list):
    return [elem for sublist in sorted(zip(*[iter(l)] * 3)) for elem in sublist]