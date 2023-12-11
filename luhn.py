def luhn(digits):
    digits = list(map(int, digits))
    result = 0
    for i in range(15, -1, -2):
        digit = digits[i] * 2
        if digit > 9:
            digit -= 9
        result += digit
    return result % 10 == 0