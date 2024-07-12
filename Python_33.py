def sort_third(l: list):
    return sorted(sum((l[i::3] for i in range(3)), []))