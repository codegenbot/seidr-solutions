def exchange(lst1, lst2):
    return "YES" if sum(x % 2 for x in lst1) <= sum(y % 2 for y in lst2) else "NO"