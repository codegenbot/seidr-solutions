def strange_sort_list(lst):
    result = []
    while lst:
        if len(lst) == 1:
            result.append(lst.pop())
        else:
            result.extend([lst.pop(0), lst.pop()])
    return result