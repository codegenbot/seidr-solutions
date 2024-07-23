def luhn(card):
    sum = 0
    for i, digit in enumerate(reversed(card)):
        if i % 2 == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum += digit
    return sum