[PYTHON]
def luhn(digits):
    sum = 0
    for i in range(len(digits) - 1, -1, -2):
        digit = digits[i]
        if digit > 4:
            digit *= 2
            sum += digit // 10 + digit % 10
        else:
            sum += digit
    return sum
[/PYTHON]
[TESTS]
# Test case 1:
assert luhn([1, 5, 5, 9, 6, 2, 5, 8, 5, 4, 7, 8, 2, 0, 2, 0, 4]) == 72
# Test case 2:
assert luhn([1, 5, 5, 9, 6, 2, 5, 8, 5, 4, 7, 8, 2, 0, 2, 0, 5]) == 73
# Test case 3:
assert luhn([1, 5, 5, 9, 6, 2, 5, 8, 5, 4, 7, 8, 2, 0, 2, 0, 6]) == 74
[/TESTS]
