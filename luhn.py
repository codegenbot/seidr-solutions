def luhn(card_number):
    card_number = [int(x) for x in card_number[1:-1].split()]
    sum_digits = 0
    is_second = True
    for digit in card_number:
        if is_second:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum_digits += digit
        is_second = not is_second
    return str(sum_digits)