```
def double_the_difference(lst):
    diff = (min(lst) + max(lst)) / 2
    result = sum(lst) - 2 * diff
    return result

def check(func, input_list, expected_result):
    result = func(input_list)
    print(result == expected_result)

check(double_the_difference, [1, 2, 3], 14)