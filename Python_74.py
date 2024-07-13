```
def total_match(lst1, lst2):
    total_chars_lst1 = sum(len(s) for s in lst1)
    total_chars_lst2 = sum(len(s) for s in lst2)

    if total_chars_lst1 > total_chars_lst2:
        return "List 1 has more characters"
    elif total_chars_lst1 < total_chars_lst2:
        return "List 2 has more characters"
    else:
        return "Both lists have the same number of characters"