def double_the_difference(lst):
    return sum(x**2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)

# Example usage or test
def check(func):
    lst = [1, 2, 3, -4, 'a']  # defined lst for the test
    odd_sum = 1**2 + 3**2
    return func(lst) == odd_sum

print(check(double_the_difference))