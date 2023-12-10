[PYTHON]
def luhn(digits):
    sum = 0
    for i in range(len(digits) - 2, -1, -2):
        digit = digits[i]
        if digit > 4:
            digit -= 9
        sum += digit
    return sum % 10 == 0
[/PYTHON]
[TESTS]
# Test case 1:
assert luhn([1, 2, 3, 4, 5]) == True
# Test case 2:
assert luhn([1, 2, 3, 4, 6]) == False
# Test case 3:
assert luhn([1, 2, 3, 4, 7]) == False
[/TESTS]
