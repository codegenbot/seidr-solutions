def double_the_difference(lst):
    lst = [3, 5, 7, 1, -2, 'a', 9]
    odd_sum = sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0)
    return odd_sum * 2