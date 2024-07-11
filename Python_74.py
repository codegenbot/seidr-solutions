def total_match(lst1, lst2):
    return min(
        [
            lst
            for lst in [lst1, lst2]
            if sum(len(s) for s in lst)
            < sum(len(s) for s in [x for x in [lst1, lst2] if x != lst])
        ],
        default=lst1,
    )