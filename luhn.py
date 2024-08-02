```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum_of_digits = 0
    is_second = True
    for digit in card_number:
        if is_second:
            digit *= 2
            if digit > 9:
                digit -= 9
        is_second = not is_second
        sum_of_digits += digit
    return sum_of_digits