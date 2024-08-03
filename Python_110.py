def exchange(lst1, lst2):
    odd_count = sum(1 for x in lst1 if x % 2 != 0)
    return "YES" if odd_count <= len(set(lst2)) else "NO"