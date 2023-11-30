def double_the_difference(list):
    return sum(x ** 2 for x in list if x > 0 and isinstance(x, int) and x % 2 != 0)

input_list = [1, 2, 3, 4, 5]
odd_sum = double_the_difference(input_list)
odd_sum