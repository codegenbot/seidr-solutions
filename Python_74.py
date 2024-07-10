def total_match(lst1, lst2):
    return lst1 if sum(len(word) for word in lst1) >= sum(len(word) for word in lst2) else lst2