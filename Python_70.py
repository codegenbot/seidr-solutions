```
def strange_sort_list(lst):
    if len(lst) == 0:
        return lst
    min_val = min(lst)
    max_val = max(lst)
    new_lst = [min_val]
    while True:
        try:
            new_lst.append(max([x for x in lst if x != min_val and x != new_lst[-1]]))
            min_val = min([x for x in lst if x != new_lst[-2] and x != new_lst[-1]])
        except ValueError:
            break
    return new_lst