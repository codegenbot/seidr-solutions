def exchange(lst1, lst2):
    odd_count = len([i for i in lst1 if i % 2 != 0])
    return "YES" if odd_count > 0 and any(i % 2 != 0 for i in lst2) else "NO"