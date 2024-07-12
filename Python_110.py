def exchange(lst1, lst2):
    even_count = sum(1 for x in lst1 if x % 2 == 0)
    odd_count = len(lst1) - even_count
    return "YES" if odd_count <= len([x for x in lst2 if x % 2 != 0]) else "NO"