```
def strange_sort_list(lst):
    if not lst:
        return []

    sorted_lst = sorted(lst)
    result = [sorted_lst.pop(0)]
    while sorted_lst:
        result.append(sorted_lst.pop())
        if sorted_lst:
            result.append(sorted_lst.pop(0))
    return result