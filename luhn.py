def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    is_second = True
    for i, digit in enumerate(card_number):
        if is_second:
            doubled_digit = digit * 2
            if doubled_digit > 9:
                doubled_digit -= 9
            total += doubled_digit
            is_second = False
        else:
            total += digit
            is_second = True
    return total