def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    double = False
    sum = 0

    for digit in reversed(card_number):
        if double:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum += digit
        double = not double

    return sum