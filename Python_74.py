```
def total_match(lst1, lst2):
    sum1 = sum(len(x) for x in lst1)
    sum2 = sum(len(x) for x in lst2)
    
    if sum1 < sum2:
        return lst1
    elif sum1 > sum2:
        return lst2
    else:
        return lst1