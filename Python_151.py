```
def double_the_difference(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int) and num >= 0:
            total_sum += num**2
    odd_sum = sum([num for num in lst if num % 2 != 0]) 
    return total_sum == 2 * odd_sum