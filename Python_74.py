def total_match(lst1, lst2):
    return min(
        [
            lst if sum(len(i) for i in lst) < sum(len(j) for j in lst2) else lst2
            for lst in [lst1, lst2]
        ],
        key=lambda x: (sum(len(i) for i in x), id(x)),
    )