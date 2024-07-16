def double_the_difference():
    lst = [1, 2, 3, 4, 5]  # Actual list input
    return sum(x ** 2 for x in lst if x > 0 and x % 2 != 0)