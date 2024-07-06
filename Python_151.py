def double_the_difference(input_list):
    min_num = min(input_list)
    max_num = max(input_list)
    return abs(min_num - max_num) * 2

def check(func, input_list, expected_result):
    result = func(input_list)
    print(result == expected_result)

check(double_the_difference, [1, 2, 3], 14)