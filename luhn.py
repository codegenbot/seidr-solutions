def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    is_double = False
    for i, digit in enumerate(card_number):
        if is_double:
            double_value = (digit * 2)
            if double_value > 9:
                total += (double_value - 9)
            else:
                total += double_value
        is_double = not is_double and (i % 2 == 0) or i % 4 != 1
        total += digit
    return total % 10