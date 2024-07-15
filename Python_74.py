def total_match(lst1, lst2):
    total_chars_lst1 = sum(len(s) for s in lst1)
    total_chars_lst2 = sum(len(s) for s in lst2)

    if total_chars_lst1 < total_chars_lst2:
        return lst1
    elif total_chars_lst1 > total_chars_lst2:
        return lst2
    else:
        match_count = sum(s1 == s2 for s1, s2 in zip(lst1, lst2))
        return (lst1 if match_count > 0 else lst2), match_count