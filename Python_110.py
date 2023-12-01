def exchange(lst1, lst2):
    lst1_even = [x for x in lst1 if x % 2 == 0]
    lst2_even = [x for x in lst2 if x % 2 == 0]
    return "YES" if len(lst1_even) == len(lst1) else "NO"