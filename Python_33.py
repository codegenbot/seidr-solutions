def sort_third(lst: list):
    if len(lst) % 3 != 0:
        lst += [float('inf')] * (3 - len(lst) % 3)
    return sorted([lst[i:i+3] for i in range(0, len(lst), 3)], key=lambda x: x[2])