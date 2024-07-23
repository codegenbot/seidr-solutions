def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, digit in enumerate(card_number):
        if (i + 1) % 2 == 0:
            if digit * 2 > 9:
                total += digit * 2 - 9
            else:
                total += digit * 2
        else:
            total += digit
    return total