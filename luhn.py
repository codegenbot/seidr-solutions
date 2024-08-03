def luhn(card_number):
    total = 0
    for i in range(16):
        digit = int(card_number[i])
        if i % 2 == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        total += digit
    return total