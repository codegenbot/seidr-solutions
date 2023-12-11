def luhn(num):
    result = 0
    for i in range(1, len(num), 2):
        digit = num[i] * 2
        if digit > 9:
            digit -= 9
        result += digit
    return result