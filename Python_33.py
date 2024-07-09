def sort_third(l: list):
    sorted_list = sorted(l)
    num_groups = (len(sorted_list) + 2) // 3
    groups = [sorted_list[i * 3 : i * 3 + 3] for i in range(num_groups)]
    return [elem for group in groups for elem in group]