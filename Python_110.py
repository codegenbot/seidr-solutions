def exchange(lst1, lst2):
    return "YES" if all(i % 2 == 0 for i in set(lst1) - set(lst2)) else "NO"