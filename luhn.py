```
def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    checksum = 0
    alt = False
    for i, digit in enumerate(reversed(card_number)):
        if alt:
            if digit * 2 > 9:
                checksum += digit * 2 - 9
            else:
                checksum += digit * 2
        else:
            checksum += digit
        alt = not alt
    luhn_checksum = (10 - (checksum % 10)) % 10
    if luhn_checksum == 0 or luhn_checksum == 10:
        return 0
    return luhn_checksum