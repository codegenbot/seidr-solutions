def exchange(lst1, lst2):
    return "YES" if all(x % 2 == 0 for x in lst1) else "NO"