def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    checksum = 0
    for i, digit in enumerate(card_number):
        if i % 2 == 1:
            double_digit = digit * 2
            checksum += 9 - double_digit if double_digit > 9 else double_digit
        else:
            checksum += digit
    return checksum % 10 == 0