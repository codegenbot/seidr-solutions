def total_match(lst1, lst2):
    return min(
        [
            lst
            for lst in (lst1, lst2)
            if sum(len(x) for x in lst) < sum(len(x) for x in lst2)
        ],
        default=lst1,
    )