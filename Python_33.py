def sort_third(l: list):
    return sorted([elem for sublist in zip(*[iter(l)]*3) for elem in sublist])