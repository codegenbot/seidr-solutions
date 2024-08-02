
def sort_third(l: list):
    return sorted(l[i] for i in range(len(l)) if i % 3 == 0) + [x for i, x in enumerate(l) if i % 3 != 0]