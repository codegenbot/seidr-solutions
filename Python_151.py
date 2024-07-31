```
def check(input_list):
    odd_sum = sum(i for i in input_list if isinstance(i, int) and i % 2 != 0)
    return double_the_difference([i for i in input_list if isinstance(i, int) and i > 0])