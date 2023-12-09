def next_smallest(lst):
    if len(lst) < 2:
        return None
    sorted_list = sorted(lst)
    second_smallest = sorted_list[1]
    for i in range(len(lst)):
        if lst[i] == second_smallest:
            return lst[i]
    return None