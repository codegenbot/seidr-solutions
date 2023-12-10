[PYTHON]
def luhn(digits):
    sum = 0
    for i in range(len(digits) - 1, -1, -2):
        digit = digits[i]
        if digit > 9:
            digit -= 9
        sum += digit
    return sum
[/PYTHON]
[TESTS]
# Test case 1:
assert luhn([1, 2, 3, 4, 5]) == 1+3+5
# Test case 2:
assert luhn([1, 2, 3, 4, 5, 6]) == 1+3+5+6
# Test case 3:
assert luhn([1, 2, 3, 4, 5, 6, 7]) == 1+3+5+7
[/TESTS]
