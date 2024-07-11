def check(normalize_numbers):
    def test_case(input, expected_output):
        output = normalize_numbers(input)
        assert output == expected_output, f"Expected {expected_output}, but got {output}"
    test_case([1, 2, 3], [0.0, 0.5, 1.0])
    test_case([-10, 0, 10], [0.0, 0.5, 1.0])
    test_case([5, 5, 5], [0.0, 0.0, 0.0])
    test_case([0, 0, 0], [0.0, 0.0, 0.0])