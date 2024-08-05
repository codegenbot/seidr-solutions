def sort_third(l: list):
    padded_l = l + [None] * (3 - len(l) % 3)
    return [elem for sublist in [sorted(padded_l[i : i + 3]) for i in range(0, len(padded_l), 3)] for elem in sublist if elem is not None]