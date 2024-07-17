def luhn(card):
    card = [int(x) for x in str(card)]
    double = False
    total = 0
    for digit in card:
        if double:
            digit *= 2
            if digit > 9:
                digit -= 9
        total += digit
        double = not double
    return total