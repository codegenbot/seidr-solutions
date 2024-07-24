def total_match(lst1, lst2):
    total_chars1 = sum(len(s) for s in lst1)
    total_chars2 = sum(len(s) for s in lst2)

    if total_chars1 < total_chars2:
        return lst1, "lst1 has fewer characters"
    elif total_chars1 > total_chars2:
        return lst2, "lst2 has fewer characters"
    else:
        return lst1, "both lists have the same number of characters"