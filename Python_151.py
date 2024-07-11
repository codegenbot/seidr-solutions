def check(num1, num2):
    input_list = list(str(num1) + str(num2))
    return double_the_difference(input_list)


def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i >= 0)
    return odd_sum * 2