def sort_third(l):
    int_list = []
    for item in l:
        if isinstance(item, list):
            int_list.append(item[1])
        else:
            int_list.append(item)
    int_list.sort()
    return [sublist[1] for sublist in [[int_list.count(i), i] for i in set(int_list)]]