```
def strange_sort_list(lst):
    if len(lst) <= 1:
        return lst
    sorted_lst = [min(lst)]
    while len(sorted_lst) < len(lst):
        max_val = max([i for i in lst if i not in sorted_lst])
        sorted_lst.append(max_val)
        min_val = min([i for i in lst if i not in sorted_lst])
        sorted_lst.append(min_val)
    return sorted_lst