def sort_third(l: list):
    return [j for i in range(0, len(l), 3) for j in sorted(l[i : i + 3])]