def luhn(card_number):
    card_number = list(map(int, str(card_number)[::-1])) 
    checksum = 0
    alt = False
    for i, digit in enumerate(card_number):
        if alt:
            if digit * 2 > 9:
                checksum += digit * 2 - 9
            else:
                checksum += digit * 2
        else:
            checksum += digit
        alt = not alt
    return (10 - (checksum % 10)) % 10