def sort_third(l: list):
    l += [None] * ((3 - len(l) % 3) % 3)  # Pad the list with None elements
    return [elem for sublist in sorted([l[i:i+3] for i in range(0, len(l), 3)], key=lambda x: x[2] if x[2] is not None else float('inf')) for elem in sublist]