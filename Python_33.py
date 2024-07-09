def sort_third(l: list):
    for i in range(2, len(l), 3):
        sub_list = l[i - 2 : i + 1]
        if len(sub_list) == 3:
            l[i - 2 : i + 1] = sorted(sub_list)
    return l