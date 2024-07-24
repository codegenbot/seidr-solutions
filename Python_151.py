def double_the_difference(lst):
    even_sum = sum(num for num in lst if isinstance(num, int) and num >= 0 and num % 2 == 0)
    odd_sum = sum(num for num in lst if isinstance(num, int) and num >= 0 and num % 2 != 0)
    return (even_sum - odd_sum) * 2