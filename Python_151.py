```
def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return 2 * odd_sum - sum(i for i in lst)

def check(func):
    test_cases = [(4, [1, 3, 5])]
    for i, ((expected_output), (input_list)) in enumerate(test_cases):
        result = func(input_list)
        if result == expected_output:
            print(f"Test {i+1} passed")
        else:
            print(f"Test {i+1} failed. Expected: {expected_output}, Got: {result}")

check(double_the_difference)