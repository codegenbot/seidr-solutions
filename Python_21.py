def check(normalize_numbers):
    def check_normalize_numbers():
        numbers = [3, 6, 9, 12]
        result = normalize_numbers(numbers)
        expected = [0.0, 0.3333333333333333, 0.6666666666666666, 1.0]
        assert result == expected, f"Expected: {expected}, Got: {result}"
        print("All test cases pass")
    check_normalize_numbers()