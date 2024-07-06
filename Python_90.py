
def next_smallest(lst):
    if len(lst) < 2:
        return None
    sorted_lst = sorted(lst)
    second_smallest = sorted_lst[1]
    for i in range(len(lst)):
        if lst[i] == second_smallest:
            return second_smallest
    return None