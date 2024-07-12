def double_the_difference(lst):
    return sum(i ** 2 for i in (num for num in lst if isinstance(num, int) and num >= 0 and num % 2 != 0))