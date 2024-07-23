def sort_third(l: list):
    l_return = []
    for i in range(len(l)):
        if i % 3 != 0:
            l_return.append(l[i])
        else:
            sorted_group = sorted([x for x in l if x % 3 == 0])
            l_return.append(sorted_group.pop(0))
    return l_return