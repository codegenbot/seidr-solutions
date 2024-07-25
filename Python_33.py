def sort_third(l: list):
    sorted_values = sorted([l[i] for i in range(len(l)) if i % 3 == 0])
    return [sorted_values.pop(0) if i % 3 == 0 else l[i] for i in range(len(l))]