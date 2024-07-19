def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    checksum = 0
    alt = False
    for i, digit in enumerate(reversed(card_number)):
        if alt:
            digit *= 2
            if digit > 9:
                digit -= 9
        checksum += digit
        alt = not alt
    return (10 - checksum % 10) % 10