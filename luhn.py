def luhn(card_number):
    card_number = list(map(int, card_number))
    double = False
    total = 0
    for digit in card_number:
        if double:
            digit *= 2
            if digit > 9:
                digit -= 9
        double = not double
        total += digit
    return total