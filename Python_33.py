def sort_third(l: list):
    return [sorted(l[i]) if i % 3 == 0 else l[i] for i in range(len(l))]