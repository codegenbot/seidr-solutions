def sort_third(l: list):
    return [elem for i in range(0, len(l), 3) for elem in sorted(l[i : i + 3])]