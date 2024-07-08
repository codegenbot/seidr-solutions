def total_match(lst1, lst2):
    if sum(len(i) for i in lst1) < sum(len(i) for i in lst2):
        return lst1
    elif sum(len(i) for i in lst1) > sum(len(i) for i in lst2):
        return lst2
    else:
        return lst1