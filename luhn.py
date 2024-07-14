def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    double_even = False
    sum_digits = 0
    for i, digit in enumerate(card_number):
        if double_even:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum_digits += digit
        double_even = not double_even
    return str(sum_digits)