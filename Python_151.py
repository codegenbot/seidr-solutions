def check(func, lst):
    odd_sum = 0
    for num in lst:
        if num % 2 != 0:
            odd_sum += num**2
    return func(lst) == (abs(odd_sum - double_the_difference(lst)))