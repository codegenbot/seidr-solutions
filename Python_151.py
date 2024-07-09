```
def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return 2 * odd_sum - sum(lst)

def check(func):
    test_cases = [(1, [1, 3, 5], 2)]
    for input_list, output in test_cases:
        result = func(input_list)
        if result == output:
            print(f"Test passed")
        else:
            print(f"Test failed. Expected: {output}, Got: {result}")
    
check(double_the_difference([1, 3, 5]))