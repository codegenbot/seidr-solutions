def total_match(lst1, lst2):
    return min([lst for lst in [lst1, lst2] if lst], default=[])[0] if any(lst) else []