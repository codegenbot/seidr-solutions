```
def strange_sort_list(lst):
    sorted_lst = []
    while lst:
        min_val = min(lst)
        max_val = max(lst)
        if len(lst) > 1:
            sorted_lst.append(min_val)
            lst.remove(min_val)
            sorted_lst.append(max_val)
            lst.remove(max_val)
        else:
            sorted_lst.extend(lst)
            break
    return sorted_lst