def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number.reverse()

    sum_of_digits = 0
    for i, digit in enumerate(card_number):
        if i % 2 == 1:
            double_digit = digit * 2
            if double_digit > 9:
                double_digit -= 9
        else:
            double_digit = digit
        sum_of_digits += double_digit

    return sum_of_digits