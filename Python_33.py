def sort_third(l: list):
    return [sorted(l[i::3]) if len(l[i::3]) >= 3 else l[i] for i in range(3)]