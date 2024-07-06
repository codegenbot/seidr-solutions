def luhn(digits):
    digits = [int(digit) for digit in digits]
    sum = 0
    for i in range(1, 16):
        if digits[i] < 5:
            sum += digits[i] * 2
        else:
            sum += digits[i] - 9
    return sum % 10 == 0