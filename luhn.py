def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, digit in enumerate(card_number[::-1]):
        if (i % 2 == 0):
            digit *= 2
            if digit > 9:
                digit -= 9
        total += digit
    return 10 - total % 10 if total % 10 != 0 else 0