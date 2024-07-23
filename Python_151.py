```
def double_the_difference(lst1, lst2):
    total = sum(num**2 for num in lst1 if isinstance(num, int) and num >= 0)
    odd_sum = sum(num for num in lst2 if isinstance(num, int))
    return abs(total - odd_sum) // len(odd_sum) * 2