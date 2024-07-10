def total_match(lst1, lst2):
    sum_chars_lst1 = sum(len(x) for x in lst1)
    sum_chars_lst2 = sum(len(x) for x in lst2)

    if sum_chars_lst1 < sum_chars_lst2:
        return (lst1, "list 1 has fewer characters")
    elif sum_chars_lst1 > sum_chars_lst2:
        return (lst2, "list 2 has more characters")
    else:
        return (lst1, "lists are equal")