def exchange(lst1, lst2):
    sum_lst1 = sum(x % 2 for x in lst1)
    sum_lst2 = sum(x % 2 for x in lst2)
    return "YES" if sum_lst1 <= sum_lst2 else "NO"