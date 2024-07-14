Here is the solution:

def luhn(card_number):
    card_number = list(map(int, card_number))
    double_digit = False
    sum_of_digits = 0
    for digit in card_number:
        if double_digit:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum_of_digits += digit
        double_digit = not double_digit
    return sum_of_digits