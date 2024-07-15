def sort_third(l: list):
    return [sorted([l[i], l[i+1], l[i+2]]) if i % 3 == 0 and i+2 < len(l) else l[i] for i in range(len(l))]