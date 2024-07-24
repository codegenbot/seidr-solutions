def total_match(lst1, lst2):
    return min(
        [
            lst
            for lst in [lst1, lst2]
            if sum(len(i) for i in lst) < sum(len(i) for i in lst2)
        ],
        default=lst1,
    )