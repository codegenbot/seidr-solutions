def sort_third(l):
    int_list = [
        sublist[2] if len(sublist) > 2 else i
        for sublist in l
        for item in l
        for i in (item if isinstance(item, list) else [item])
        if isinstance(i, int)
    ]
    return sorted(int_list)