```
def total_match(lst1, lst2):
    sum_chars_1 = sum(len(s) for s in lst1)
    sum_chars_2 = sum(len(s) for s in lst2)
    
    if sum_chars_1 < sum_chars_2:
        return lst1
    elif sum_chars_1 > sum_chars_2:
        return lst2
    else:
        return lst1