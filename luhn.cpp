[PYTHON]
def luhn(digits):
    sum = 0
    for i in range(len(digits) - 2, -1, -2):
        digit = digits[i]
        if digit > 9:
            digit -= 9
        sum += digit
    return sum
[/PYTHON]
[TESTS]
# Test case 1:
assert luhn([1, 2, 3, 4, 5, 6, 7, 8, 9]) == 36
# Test case 2:
assert luhn([1, 2, 3, 4, 5, 6, 7, 8, 9, 0]) == 36
# Test case 3:
assert luhn([5, 5, 5, 5, 5, 5, 5, 5, 5, 5]) == 45
[/TESTS]
