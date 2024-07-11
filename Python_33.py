def sort_third(l: list):
    return [sorted([l[j] for j in range(i, len(l), 3)]).pop(0) if i % 3 != 0 else sorted([l[j] for j in range(i-1, len(l), 3)]).pop(0)
           for i, _ in enumerate(l)]