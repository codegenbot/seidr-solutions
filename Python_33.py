def sort_third(l: list):
    sorted_indices = sorted([i for i in range(len(l)) if i % 3 == 0], key=lambda x: l[x])
    sorted_values = [l[i] for i in sorted_indices]
    return [sorted_values.pop(0) if i % 3 == 0 else l[i] for i in range(len(l))]