def total_match(lst1, lst2):
    return min(
        [
            lst
            for lst in [lst1, lst2]
            if sum(len(word) for word in lst)
            < sum(len(word) for word in [i for i in [lst1, lst2] if i != lst])
        ],
        default=lst1,
    )