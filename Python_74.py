def total_match(lst1, lst2):
    return min(
        (lst if sum(len(s) for s in lst) < sum(len(s) for s in other) else other)
        for lst, other in [(lst1, lst2), (lst2, lst1)], default=lst1
    )