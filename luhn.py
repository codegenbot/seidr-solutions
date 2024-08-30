def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    double_even = False
    sum_of_digits = 0
    for digit in reversed(card_number):
        if double_even:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum_of_digits += digit
        double_even = not double_even
    return sum_of_digits