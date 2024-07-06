```
def check(expected_output):
    input_list = [1, 2, 3]
    print(double_the_difference(input_list) == expected_output)

def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)

check(14)