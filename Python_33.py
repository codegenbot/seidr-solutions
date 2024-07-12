```
def sort_third(l: list):
    sorted_list = []
    index = 0
    for val in l:
        if index % 3 == 2:
            sorted_list.append(val)
            sorted_list.extend(sorted([x for x in l if (index - l.index(x)) % 3 != 0])[::-1][1:])
        else:
            sorted_list.append(val)
        index += 1
    return tuple(sorted_list)