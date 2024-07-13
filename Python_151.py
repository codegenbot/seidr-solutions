def double_the_difference(lst):
    return sum(num ** 2 for num in lst if num % 2 != 0 and num >= 0 and isinstance(num, int)) * 2 if lst else 0