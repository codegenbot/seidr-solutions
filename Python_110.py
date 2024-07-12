def exchange(lst1, lst2):
    even_in_lst1 = sum(1 for x in lst1 if x % 2 == 0)
    odd_in_lst1 = len(lst1) - even_in_lst1
    return "YES" if any(x % 2 != 0 for x in lst2[:odd_in_lst1]) else "NO"