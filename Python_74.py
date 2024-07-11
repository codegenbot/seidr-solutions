def total_match(lst1, lst2):
    return (
        min(
            (lst for lst in (lst1, lst2) if sum(len(s) for s in lst)),
            key=lambda x: sum(len(s) for s in x),
        )
        if len(set(sum(len(s) for s in lst) for lst in (lst1, lst2))) > 1
        else lst1
    )