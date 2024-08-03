def get_row(lst, x):
    result = [
        (i, j)
        for i, sub_lst in enumerate(lst)
        if x in sub_lst
        for j in range(len(sub_lst) - 1, -1, -1)
        if x == sub_lst[j]
    ]
    return sorted(result, key=lambda x: (x[0], len(lst[x[0]])))