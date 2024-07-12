def total_match(lst1, lst2):
    return min(
        [
            lst
            for lst in [lst1, lst2]
            if sum(len(word) for word in lst)
            < sum(len(word) for word in list(set(lst2)))
        ],
        default=lst1,
    )