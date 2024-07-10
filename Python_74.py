```
def total_match(lst1, lst2):
    total_chars_lst1 = sum(len(s) for s in lst1)
    total_chars_lst2 = sum(len(s) for s in lst2)

    if total_chars_lst1 < total_chars_lst2:
        return lst1
    elif total_chars_lst1 > total_chars_lst2:
        return lst2
    else:
        match_count = 0
        for s1, s2 in zip(lst1, lst2):
            if set(s1) == set(s2):
                match_count += 1
        if match_count == len(lst1):
            return "Both lists are matches"
        elif match_count > 0:
            return f"{match_count} matching sets found"
        else:
            return "No matching sets found"