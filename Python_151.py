def check(func, lst):
    return func(lst)


def double_the_difference(lst):
    odd_sum = sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0)
    return odd_sum * 2


# Define the input list 'lst'
lst = [1, 2, 3, 4, 5]

# Call the function with the input list
check(double_the_difference, lst)