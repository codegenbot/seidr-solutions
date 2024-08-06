def luhn(num):
    sum = 0
    for i in range(15):
        digit = int(str(num)[i])
        if (i % 2) == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum += digit
    return sum