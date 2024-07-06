```
def strange_sort_list(lst):
    if not lst:
        return []

    sorted_lst = sorted(lst)
    result = [sorted_lst[0]]
    for _ in range(len(sorted_lst) - 1):
        min_val = float('inf')
        max_val = float('-inf')
        for val in sorted_lst:
            if val < min_val:
                min_val = val
            elif val > max_val:
                max_val = val
        result.append(min_val)
        sorted_lst.remove(min_val)
        if len(sorted_lst) > 0:
            result.append(max_val)
            sorted_lst.remove(max_val)
    return result