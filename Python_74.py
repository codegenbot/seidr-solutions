```
def total_match(lst1, lst2):
    len1 = sum(len(x) for x in lst1)
    len2 = sum(len(x) for x in lst2)
    
    if len1 < len2:
        return lst1
    elif len1 > len2:
        return lst2
    else:
        return lst1