def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    sum_of_digits = 0
    double = False
    for digit in reversed(card_number):
        if double:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum_of_digits += digit
        double = not double
    return sum_of_digits