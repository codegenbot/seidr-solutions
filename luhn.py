def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, digit in enumerate(reversed(card_number)):
        if (i % 2 == 1 and digit * 2 > 9):
            total += (digit * 2) - 9
        elif i % 2 == 1:
            total += digit
        else:
            total += digit * 2
    return total % 10