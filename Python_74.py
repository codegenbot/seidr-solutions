def total_match(lst1, lst2):
    if len(''.join(lst1)) > len(''.join(lst2)):
        return lst1
    elif len(''.join(lst2)) > len(''.join(lst1)):
        return lst2
    else:
        return lst1