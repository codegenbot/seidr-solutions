def strange_sort_list(lst):
    if len(lst) <= 1:
        return lst
    else:
        min_val = min(lst)
        max_val = max(lst[1:])
        result = [min_val, max_val]
        for i in range(2, len(lst)):
            if i % 2 == 0:
                result.append(max_val)
            else:
                result.append(min_val)
        return result