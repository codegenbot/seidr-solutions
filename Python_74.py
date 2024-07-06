def total_match(lst1, lst2):
    return min(
        [
            lst
            for lst in [lst1, lst2]
            if sum(len(i) for i in lst)
            < sum(len(i) for i in [x for x in [lst1, lst2] if x != lst][0])
        ],
        default=lst1,
    )