def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = sum(card_number)
    for i, digit in enumerate(reversed(card_number[:-1])):
        if (i % 2 == 0 and digit * 2 > 9):
            total += digit * 2 - 9
        elif i % 2 == 0:
            total += digit * 2
        else:
            total += digit
    return total