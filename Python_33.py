def sort_third(l: list):
    return sorted(list(zip(*(l[i::3] for i in range(3)))[0])