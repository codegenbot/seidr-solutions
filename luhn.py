[PYTHON]
def luhn(digits):
    digits = list(map(int, digits))
    result = 0
    for i in range(15, -1, -2):
        digit = digits[i] * 2
        if digit > 9:
            digit -= 9
        result += digit
    return result % 10 == 0
[/PYTHON]
[TESTS]
# Test case 1:
assert luhn([1, 2, 3, 4, 5, 6, 7, 8, 9]) == True
# Test case 2:
assert luhn([1, 2, 3, 4, 5, 6, 7, 8, 9, 0]) == False
# Test case 3:
assert luhn([4, 5, 6, 7, 8, 9, 0, 1, 2, 3]) == True
[/TESTS]
