def check(expected_output):
    input_list = [1, 2, 3]
    result = double_the_difference(input_list)
    print(result == expected_output)

def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)

check(14)