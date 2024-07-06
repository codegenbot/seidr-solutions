def total_match(lst1, lst2):
    return sorted(lst1 + lst2, key=len)[:len(lst1)]