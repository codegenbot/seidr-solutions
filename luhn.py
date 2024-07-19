```
def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    alt = True
    for i, digit in enumerate(card_number):
        if alt:
            digit *= 2
            if digit > 9:
                digit -= 9
        checksum += digit
        alt = not alt
    return checksum % 10