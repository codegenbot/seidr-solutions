def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    is_double = False
    for i, digit in enumerate(card_number):
        if is_double:
            double_value = (digit * 2) % 10
            if double_value > 9:
                double_value -= 9
            total += double_value
            is_double = False
        else:
            total += digit
        is_double = not is_double and (i + 1) % 2 == 0
    return total