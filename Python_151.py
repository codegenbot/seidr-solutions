def double_the_difference(lst):
    lst = [5, -2, 'hello', 7, 3, -1, 0]
    odd_sum = sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0)
    return odd_sum * 2