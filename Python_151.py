def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0) if lst else 0

# Add an input list to check function call
check(double_the_difference, [2, -3, 5, 0, 7])