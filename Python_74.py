def total_match(lst1, lst2):
    return min(
        [
            lst
            for lst in (lst1, lst2)
            if sum(len(s) for s in lst)
            < sum(len(s) for s in [i for i in (lst1, lst2) if i != lst])
        ],
        default=lst1,
    )