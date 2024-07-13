def check(func, lst):
    return func(lst)

def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0) * 2

check(double_the_difference, lst)  # Add the missing 'lst' parameter in the function call