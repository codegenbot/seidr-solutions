def double_the_difference(lst):
    return sum(x**2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)


def check(func):
    lst = [1, 2, 3, 4, 5]  # Example list for testing
    odd_sum = sum(x**2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)
    assert func(lst) == odd_sum, f"Expected {odd_sum}, but got {func(lst)}"


check(double_the_difference)