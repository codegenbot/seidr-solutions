def exchange(lst1, lst2):
    return "YES" if sum(1 for num in lst1 if num % 2 != 0) <= len(lst2) else "NO"