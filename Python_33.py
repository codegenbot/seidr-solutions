def sort_third(l: list):
    sorted_list = sorted(l)
    groups = [sorted_list[i : i + 3] for i in range(0, len(sorted_list), 3)]
    return [elem for group in groups for elem in group]