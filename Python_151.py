def double_the_difference(lst):
    lst = [1, 2, 3, 4, 5]  # Replace [1, 2, 3, 4, 5] with the correct input
    odd_sum = sum(x**2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)
    return odd_sum * 2