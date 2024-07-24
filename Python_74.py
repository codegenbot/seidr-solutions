```
def total_match(lst1, lst2):
    return min([lst for lst in [set(lst1), set(lst2)] if len(set(lst).symmetric_difference(lst)) < len(set(lst2).symmetric_difference(lst2))], default=lst1)