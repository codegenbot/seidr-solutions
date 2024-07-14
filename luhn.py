def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, digit in enumerate(card_number):
        if (i % 2 == 1):
            double_value = (digit * 2)
            if double_value > 9:
                total += (double_value - 9)
            else:
                total += double_value
        else:
            total += digit
    return total % 10