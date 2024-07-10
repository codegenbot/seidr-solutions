Here is the completed code:

def luhn(card_number):
    card_number = [int(x) for x in card_number.split()]
    sum_digits = 0
    alt = True
    for digit in card_number:
        if alt:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum_digits += digit
        alt = not alt
    return sum_digits