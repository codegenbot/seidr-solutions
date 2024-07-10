```
def strange_sort_list(lst):
    if not lst:
        return []

    sorted_lst = []
    min_val = min(lst)
    max_val = max(lst)

    while len(sorted_lst) < len(lst):
        if min_val in lst:
            sorted_lst.append(min_val)
            lst.remove(min_val)
        elif max_val in lst:
            sorted_lst.append(max_val)
            lst.remove(max_val)
        else:
            sorted_lst.extend(sorted(lst))
            break

    return sorted_lst