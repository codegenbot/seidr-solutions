def luhn(card):
    total = 0
    for i in range(len(card)):
        digit = int(card[i])
        if (i % 2) == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        total += digit
    return total