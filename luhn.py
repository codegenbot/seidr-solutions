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
assert luhn([1, 7, 8, 3, 5, 2, 6, 4, 1, 7, 8, 3, 5, 2, 6, 4]) == True
# Test case 2:
assert luhn([1, 7, 8, 3, 5, 2, 6, 4, 1, 7, 8, 3, 5, 2, 6, 5]) == False
# Test case 3:
assert luhn([1, 7, 8, 3, 5, 2, 6, 4, 1, 7, 8, 3, 5, 2, 6, 6]) == False
[/TESTS]
