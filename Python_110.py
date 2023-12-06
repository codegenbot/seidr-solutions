def exchange(lst1, lst2):
    even_nums = []
    for num in lst1:
        if num % 2 == 0:
            even_nums.append(num)
    for num in lst2:
        if num not in even_nums and num % 2 != 0:
            return "NO"
    return "YES"