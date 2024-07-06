def luhn_algorithm(digits):
    sum = 0
    for i in range(1, 16, 2):
        digit = digits[i] * 2
        if digit > 9:
            sum += digit - 9
        else:
            sum += digit
    return sum