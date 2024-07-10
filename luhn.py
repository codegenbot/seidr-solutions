def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    new_sum = 0
    is_second = True
    for digit in card_number:
        if is_second:
            digit *= 2
            if digit > 9:
                digit -= 9
        is_second = not is_second
        new_sum += digit
    return new_sum