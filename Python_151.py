def double_the_difference(input_list):
    return sum(x**2 for x in input_list if x > 0 and type(x) == int and x % 2 != 0) * 2


input_list = [1, 3, 5, 2, 7]
print(double_the_difference(input_list))