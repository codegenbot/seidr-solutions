def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, digit in enumerate(card_number):
        if i % 2 == 0:
            doubled_digit = digit * 2
            if doubled_digit > 9:
                doubled_digit -= 9
            total += doubled_digit
        else:
            total += digit
    return total