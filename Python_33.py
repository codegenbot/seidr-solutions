def sort_third(l: list):
    return [sorted(l[i] for i in range(len(l)) if i % 3 == 0) if i % 3 == 0 else l[i] for i in range(len(l))]