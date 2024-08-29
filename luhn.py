def luhn(number):
    sum = 0
    for i in range(16):
        digit = int(number[i])
        if (i % 2) == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum += digit
    return str(sum)