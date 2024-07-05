def double_the_difference(input_lst):
    return sum(x**2 for x in input_lst if isinstance(x, int) and x > 0 and x % 2 != 0)

def check(func):
    input_lst = [1, 2, 3, 4, 5]
    odd_sum = sum(x**2 for x in input_lst if x > 0 and x % 2 != 0)
    assert func(input_lst) == odd_sum

check(double_the_difference)