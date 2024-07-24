```
def strange_sort_list(lst):
    if not lst:
        return []

    sorted_lst = sorted(lst)
    result = [sorted_lst.pop(0)]
    while sorted_lst:
        min_val = min(sorted_lst)
        max_val = max(sorted_lst)
        if len(result) % 2 == 1:
            result.append(min_val)
            sorted_lst.remove(min_val)
        else:
            result.append(max_val)
            sorted_lst.remove(max_val)

    return result