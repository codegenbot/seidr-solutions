```
def double_the_difference(lst):
    total = 0
    odd_sum = sum(num for num in lst[1] if isinstance(num, int) and num % 2 != 0)
    return abs(sum(num**2 for num in lst[0]) - odd_sum) // len(odd_sum) * 2