def check(input_list):
    odd_sum = sum(i for i in input_list if isinstance(i, int) and i % 2 != 0)
    return double_the_difference([input_list[i] for i in range(len(input_list)) if isinstance(input_list[i], int) and input_list[i] > 0])