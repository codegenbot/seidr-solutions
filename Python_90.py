def next_smallest(lst):
    if len(lst) < 2:
        return None
    sorted_list = sorted(lst)
    for i in range(1, len(sorted_list)):
        if sorted_list[i] != sorted_list[i-1]:
            return sorted_list[i]
    return None