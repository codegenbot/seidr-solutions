def exchange(lst1, lst2):
    odd_count = sum(1 for x in lst1 if x % 2)
    return "YES" if len(set(lst2)) >= odd_count else "NO"