def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    double_even = False
    total_sum = 0

    for digit in card_number:
        if double_even:
            digit *= 2
            if digit > 9:
                digit -= 9
        double_even = not double_even

        total_sum += digit

    return total_sum