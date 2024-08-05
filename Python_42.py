def check(func):
    sample_input = [1, 2, 3]
    expected_output = [2, 3, 4]
    output = func(sample_input)
    assert output == expected_output
    print("Test passed successfully!")