def double_the_difference(input_list):
    return sum(set(input_list)) - min(input_list) - max(input_list)

def check(func, input_list, expected_result):
    result = func(input_list)
    print(result == expected_result)

check(double_the_difference, [1, 2, 3], 14)