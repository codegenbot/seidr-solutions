def double_the_difference(lst):
    return sum(x**2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)

# Example of how to use the function, replace with the actual data/logic needed for the check function
lst = [1, 2, 3, 4, 5, 6, 7, 8, 9]  # Ensure 'lst' is defined before being passed
odd_sum = sum(x**2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)
check(double_the_difference(lst) == odd_sum)