def exchange(lst1, lst2):
    even_count = sum(1 for num in lst1 if num % 2 == 0)
    return "YES" if even_count == len(lst1) else "NO"