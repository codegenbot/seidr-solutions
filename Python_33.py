def sort_third(l: list):
    sorted_list = sorted(l + [None] * (3 - len(l) % 3))
    return [elem for group in [sorted_list[i:i+3] for i in range(0, len(sorted_list), 3)] for elem in group if elem is not None]