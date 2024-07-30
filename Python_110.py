def exchange(lst1, lst2):
    return "YES" if sum(x % 2 != 0 for x in lst1) <= len(lst2) else "NO"