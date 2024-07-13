```
def total_match(lst1, lst2):
    total_chars_lst1 = sum(len(s) for s in lst1)
    total_chars_lst2 = sum(len(s) for s in lst2)

    if len(lst1) < len(lst2):
        return lst1
    elif len(lst1) > len(lst2):
        return lst2
    else:
        match_count = 0
        for s1, s2 in zip(lst1, lst2):
            match_count += sum(c1 == c2 for c1, c2 in zip(s1, s2))
        if match_count > total_chars_lst1 / 2 or match_count > total_chars_lst2 / 2:
            return [s1 for s1, s2 in zip(lst1, lst2) if sum(c1 == c2 for c1, c2 in zip(s1, s2)) > 0]
        else:
            return lst1 if total_chars_lst1 >= total_chars_lst2 else lst2