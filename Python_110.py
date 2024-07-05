
def exchange(lst1, lst2):
    even_nums = []
    for num in lst1:
        if num % 2 == 0:
            even_nums.append(num)
    if len(even_nums) == len(lst1):
        return "YES"
    else:
        return "NO"