def exchange(lst1, lst2):
    return "YES" if all(num % 2 == 0 for num in lst1) else "NO"