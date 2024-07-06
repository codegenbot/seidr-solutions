```
def sort_third(l: list):
    sorted_list = []
    for i, x in enumerate(l):
        if i % 3 == 0:
            if len(sorted_list) > 0 and sorted_list[-1] % 3 == 0:
                sorted_list.append(min([x for x in l if x % 3 == 0]))
            else:
                sorted_list.append(x)
        else:
            sorted_list.append(x)
    return tuple(sorted_list)