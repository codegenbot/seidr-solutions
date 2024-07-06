def luhn(digits):
    digits = [int(digit) for digit in digits]
    sum = 0
    for i in range(16):
        if i % 2 == 1:
            digit = digits[i] * 2
            if digit > 9:
                sum += digit // 10 + digit % 10
            else:
                sum += digit
        else:
            sum += digits[i]
    return int(sum)