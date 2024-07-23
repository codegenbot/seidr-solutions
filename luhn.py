def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    is_second = False
    for i, digit in enumerate(reversed(card_number)):
        if not is_second:
            total += digit
        else:
            digit *= 2
            if digit > 9:
                digit -= 9
            total += digit
        is_second = not is_second
    return total