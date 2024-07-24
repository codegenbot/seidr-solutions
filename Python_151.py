def double_the_difference(input_list):
    return abs(sum(i for i in input_list) - 2 * sum(i for i in input_list if isinstance(i, int) and i % 2 != 0))