def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    new_card_number = []
    sum_of_digits = 0
    for i, digit in enumerate(card_number):
        if i % 2 == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        new_card_number.append(digit)
    for digit in new_card_number:
        sum_of_digits += digit
    return sum_of_digits