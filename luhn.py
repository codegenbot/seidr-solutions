def luhn_sum(card):
    total = 0
    for i, digit in enumerate(card[::-1]):
        if i % 2 == 0:
            digit *= 2
            if digit > 9:
                digit -= 9
        total += digit
    return total