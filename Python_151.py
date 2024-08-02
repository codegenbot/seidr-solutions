def check(func, lst):
    return func(lst)

def double_the_difference(lst):
    return sum(x ** 2 for x in lst if x % 2 != 0 and x > 0 and isinstance(x, int)) * 2 if lst else 0

check(double_the_difference, lst)  # Add the input parameter 'lst' to the check function