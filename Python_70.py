
def strange_sort_list(lst):
    result = []
    while lst:
        current_min = min(lst)
        result.append(current_min)
        lst.remove(current_min)
        if lst:
            current_max = max(lst)
            result.append(current_max)
            lst.remove(current_max)
    return result