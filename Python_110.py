def exchange(lst1, lst2):
    if all(x % 2 == 0 for x in lst1):
        return "YES"
    even_in_lst2 = [x for x in lst2 if x % 2 == 0]
    if len(even_in_lst2) >= len([x for x in lst1 if x % 2 != 0]):
        return "YES"
    return "NO"