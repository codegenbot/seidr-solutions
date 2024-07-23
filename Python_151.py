def double_the_difference(lst):
    total = 0
    odd_sum = 0
    for num in lst:
        if isinstance(num, int) and num >= 0:
            total += num**2
            if num % 2 != 0: 
                odd_sum += num
    return (total - odd_sum) / (len(lst) - len([x for x in lst if x % 2 == 0]))