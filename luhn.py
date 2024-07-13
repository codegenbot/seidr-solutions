def luhn(card):
    total = 0
    for i, digit in enumerate(card[::-1]):
        if i % 2 == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        total += digit
    return str(total)