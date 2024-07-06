def luhn_algorithm(digits):
    sum = 0
    for i in range(16):
        if i % 2 == 0:
            digit = digits[i] * 2
            if digit > 9:
                sum += (digit - 9)
            else:
                sum += digit
        else:
            sum += digits[i]
    return sum