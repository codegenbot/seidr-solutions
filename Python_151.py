```
def double_the_difference(input_list):
    first_max = max(input_list)
    second_min = min(input_list) + 1
    return (first_max - second_min)

def check(func, input_list, expected_result):
    result = func(input_list)
    print(result == expected_result)

check(double_the_difference, [1, 2, 3], 14)