def double_the_difference(lst):
    return sum(x**2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)

# Example of how to use the function, replace with the actual data/logic needed for the check function
lst = [1, 2, 3, 4, 5]  # Ensure 'lst' is defined before being passed
odd_sum = 1**2 + 3**2 + 5**2  # Replace with the actual expected sum
check(double_the_difference(lst) == odd_sum)