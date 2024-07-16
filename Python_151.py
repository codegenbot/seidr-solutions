def double_the_difference(lst):
    lst = [3, 7, 9, 2, 6, 5]  # Actual list input for the function
    return sum(x ** 2 for x in lst if x > 0 and x % 2 != 0)