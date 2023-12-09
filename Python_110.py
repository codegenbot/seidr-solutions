def exchange(lst1, lst2):
    even_count = 0
    for num in lst1:
        if num % 2 == 0:
            even_count += 1
    if even_count == len(lst1):
        return "YES"
    else:
        return "NO"