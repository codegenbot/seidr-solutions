def double_the_difference(lst):
    return sum([num ** 2 for num in lst if type(num) == int and num >= 0 and num % 2 != 0])