def sort_third(l: list):
    for i in range(2, len(l), 3):
        sub_list = sorted(l[i-2:i+1])
        l[i-2:i+1] = sub_list
    return l