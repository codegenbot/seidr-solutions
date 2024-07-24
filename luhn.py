def luhn(card_number):
    card_number = [int(i) for i in str(card_number)[1:]]
    double_even = False
    total = 0

    for digit in reversed(card_number):
        if double_even:
            digit *= 2
            if digit > 9:
                digit -= 9
        double_even = not double_even

        total += digit

    return str(total)