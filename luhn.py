[PYTHON]
def luhn(digits):
    digits = list(map(int, digits))
    result = 0
    for i in range(1, len(digits) + 1):
        if i % 2 == 0:
            digits[i - 1] *= 2
            if digits[i - 1] > 9:
                digits[i - 1] -= 9
        result += digits[i - 1]
    return result
[/PYTHON]
[TESTS]
# Test case 1:
assert luhn([1, 2, 3, 4, 5, 6, 7, 8, 9, 0]) == 38
# Test case 2:
assert luhn([1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1]) == 41
# Test case 3:
assert luhn([1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2]) == 46
[/TESTS]
