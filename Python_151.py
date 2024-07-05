def check(double_the_difference):
    lst = [1, -3, 4, 5, 7, 10]  # Example list to test
    odd_sum = 1**2 + 5**2 + 7**2  # Expected sum of squares of positive odd integers
    assert double_the_difference(lst) == odd_sum

def double_the_difference(lst):
    return sum(x**2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)

# Call the check function to run the test
check(double_the_difference)