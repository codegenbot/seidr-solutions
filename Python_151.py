def double_the_difference(lst):
    return sum([num**2 for num in lst if num % 2 != 0 and num >= 0 and type(num) == int])