def double_the_difference(lst):
    total = 0
    odd_sum = sum(num for num in lst if isinstance(num, int) and num >= 0 and num % 2 != 0)
    total += odd_sum ** 2
    return total