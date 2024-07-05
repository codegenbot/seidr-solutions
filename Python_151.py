def double_the_difference(lst):
    return sum(x**2 for x in lst if isinstance(x, int) and x > 0 and x % 2 != 0)

def check(func):
    test_lst = [1, 2, 3, 4, 5]
    expected_result = 1**2 + 3**2 + 5**2  # 1 + 9 + 25 = 35
    assert func(test_lst) == expected_result, "Test failed"
    
check(double_the_difference)
print(double_the_difference([1, -2, 3, 'a', 4, 5]))  # Example test case, expected: 35