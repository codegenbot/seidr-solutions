def sort_third(l: list):
    flat_list = [l[i:i+3] for i in range(0, len(l), 3)]
    sorted_list = sorted(flat_list, key=lambda x: x[2] if len(x) >= 3 else float("inf"))
    groups = [sorted_list[i : i + 3] for i in range(0, len(sorted_list), 3)]
    return [elem for group in groups for elem in group]