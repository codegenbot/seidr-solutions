def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    is_double = False
    for i, digit in enumerate(card_number):
        if is_double:
            if digit * 2 > 9:
                total += (digit * 2) - 9
            else:
                total += digit * 2
        is_double = not is_double and (i % 2 == 1)
        total += digit
    return total % 10