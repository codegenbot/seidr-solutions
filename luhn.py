```
def luhn(card):
    sum = 0
    for i in range(len(card) - 1):
        digit = int(card[i])
        if (i % 2 == 0):
            digit *= 2
            if (digit > 9):
                digit -= 9
        sum += digit
    last_digit = int(card[-1])
    return sum + last_digit