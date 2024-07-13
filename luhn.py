def luhn_algorithm(card_number):
    card_number = list(map(int, card_number[1:]))
    double_even = False
    total_sum = 0

    for digit in card_number:
        if double_even:
            digit *= 2
            if digit > 9:
                digit -= 9
        double_even = not double_even

        total_sum += digit

    return str(total_sum)