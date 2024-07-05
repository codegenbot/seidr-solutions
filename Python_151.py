def double_the_difference(lst):
    return sum(x**2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)


lst = [1, 2, 3, 4, 5]  # Example list, replace with actual data
odd_sum = 1**2 + 3**2 + 5**2  # Replace with the expected sum
check(double_the_difference(lst) == odd_sum)