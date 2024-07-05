def double_the_difference(lst):
    return sum(x**2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)

def check(func):
    lst = [1, 2, -3, 4, 5]
    odd_sum = 27  # which is 1^2 + 5^2
    assert func(lst) == odd_sum

check(double_the_difference)