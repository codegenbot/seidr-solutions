```
def strange_sort_list(lst):
    sorted_lst = []
    while len(lst) > 0:
        if len(lst) == 1:
            sorted_lst.append(lst.pop())
        else:
            min_val = min(lst)
            max_val = max(lst)
            sorted_lst.append(min_val)
            lst.remove(min_val)
            sorted_lst.append(max_val)
            lst.remove(max_val)
    return sorted_lst