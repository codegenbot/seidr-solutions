def sort_third(l: list):
    return [sorted([l[i], l[i+1], l[i+2]]) if i+2 < len(l) else l[i] for i in range(0, len(l), 3)