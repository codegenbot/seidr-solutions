def luhn(num):
    total = 0
    for i in range(len(num)):
        digit = int(num[i])
        if i % 2 == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        total += digit
    return total