def sort_third(l: list):
    sorted_list = sorted([l[i:i+3] for i in range(0, len(l), 3)], key=lambda x: x[2] if len(x) >= 3 else float("inf"))
    return [elem for group in sorted_list for elem in group]