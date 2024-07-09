def check(func):
    test_cases = [(4, [1, 3, 5])]
    for i, ((expected_output), (input_list)) in enumerate(test_cases):
        result = func(input_list)
        if result == expected_output:
            print(f"Test {i+1} passed")
        else:
            print(f"Test {i+1} failed. Expected: {expected_output}, Got: {result}")
    double_the_difference([1, 3, 5])