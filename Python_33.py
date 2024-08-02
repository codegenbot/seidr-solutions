def sort_third(l: list):
    return [sorted(l[i : i + 3]) if i % 3 == 0 else x for x in l for i in range(len(l))]