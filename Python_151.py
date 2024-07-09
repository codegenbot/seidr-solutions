```Python
def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return 2 * odd_sum - sum(lst)

def check(func):
    test_cases = [([1, 3, 5], 2)]
    for i, (input, output) in enumerate(test_cases):
        result = func(input)
        if result == output:
            print(f"Test {i+1} passed")
        else:
            print(f"Test {i+1} failed. Expected: {output}, Got: {result}")

check(double_the_difference([1, 3, 5]))