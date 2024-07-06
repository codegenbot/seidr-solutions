```
def double_the_difference(input_list):
    result = 0
    for i in input_list:
        result += i * 2
    return result

def check(func):
    input_list = [1, 2, 3]
    expected_result = 14
    result = func(input_list)
    print(result == expected_result)

check(double_the_difference)