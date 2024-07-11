def total_match(lst1, lst2):
    min_length = min(len(lst1), len(lst2)) if len(lst1) and len(lst2) else 0
    if not (lst1 and lst2) or min_length == 0:
        return []
    return (
        [s for s in lst1[:min_length]]
        if sum(len(s) for s in lst1[:min_length])
        < sum(len(s) for s in lst2[:min_length])
        else [s for s in lst2[:min_length]]
    )