[PYTHON]
def luhn(digits):
    sum = 0
    for i in range(len(digits) - 2, -1, -2):
        digit = digits[i]
        if digit > 4:
            digit -= 9
        sum += digit * 2
    return sum
[/PYTHON]
[TESTS]
# Test case 1:
assert luhn([1, 2, 3, 4, 5, 6, 7, 8, 9, 0]) == 45
# Test case 2:
assert luhn([1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1]) == 45
# Test case 3:
assert luhn([1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2]) == 45
[/TESTS]
