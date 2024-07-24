def double_the_difference(lst):
    total = 0
    odd_sum = 0
    for num in lst:
        if isinstance(num, int) and num >= 0:
            if num % 2 != 0: 
                odd_sum += num**2
            total += num**2
    return 2 * (total - odd_sum)