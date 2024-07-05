def exchange(lst1, lst2):
    for num in lst1:
        if num % 2 != 0:
            if not any(x % 2 == 0 for x in lst2):
                return "NO"
    return "YES"