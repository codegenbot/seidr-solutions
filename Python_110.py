def exchange(lst1, lst2):
    if all(x % 2 == 0 for x in lst1):
        return "YES"
    even_lst2 = [x for x in lst2 if x % 2 == 0]
    odd_lst1 = [x for x in lst1 if x % 2 != 0]
    if len(even_lst2) >= len(odd_lst1):
        return "YES"
    return "NO"