```
def total_match(lst1, lst2):
    sum_chars_lst1 = sum(len(x) for x in lst1)
    sum_chars_lst2 = sum(len(x) for x in lst2)
    
    if sum_chars_lst1 < sum_chars_lst2:
        return 'List 1 has fewer characters.'
    elif sum_chars_lst1 > sum_chars_lst2:
        return 'List 2 has fewer characters.'
    else:
        return 'Both lists have the same number of characters.'