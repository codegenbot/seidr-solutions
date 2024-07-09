```
def check(func):
    lst = [1, 2, -3]
    result = func(lst)
    even_sum_squares = sum(i**2 for i in lst if isinstance(i, int) and i % 2 == 0)
    odd_sum = sum(i for i in lst if isinstance(i, int) and i % 2 != 0)
    total_sum = sum(i for i in lst if isinstance(i, int))
    expected_result = (total_sum - odd_sum)**2 - 4 * even_sum_squares
    return result, expected_result

def double_the_difference(lst):
    even_sum_squares = sum(i**2 for i in lst if isinstance(i, int) and i % 2 == 0)
    total_sum = sum(i for i in lst if isinstance(i, int))
    odd_sum = total_sum - even_sum_squares
    return 2 * (odd_sum**2 - even_sum_squares)

result, expected_result = check(double_the_difference([1, 2, -3]))
print("Expected result: ", expected_result)
print("Actual result: ", result)