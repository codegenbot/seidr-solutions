def luhn(card_num):
    card_num = [int(x) for x in str(card_num)[1:]]
    double = False
    result = 0
    for digit in reversed(card_num):
        if double:
            digit *= 2
            if digit > 9:
                digit -= 9
        result += digit
        double = not double
    return result