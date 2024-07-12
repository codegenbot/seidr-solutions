def sort_third(l: list):
    sorted_thirds = sorted([l[i] for i in range(len(l)) if i % 3 == 0])
    return [sorted_thirds.pop(0) if i % 3 == 0 else l[i] for i in range(len(l))]