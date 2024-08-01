def sort_third(l: list):
    return sorted([elem for sublist in [l[i : i + 3] for i in range(0, len(l), 3)] for elem in sublist])