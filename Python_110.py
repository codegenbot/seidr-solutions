
def exchange(lst1, lst2):
    even_count = 0
    for num in lst1:
        if num % 2 == 0:
            even_count += 1
    if len(lst1) - even_count > len(lst2):
        return "NO"
    else:
        return "YES"