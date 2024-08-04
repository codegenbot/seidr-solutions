def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:-1].split()]
    total = 0
    for i, digit in enumerate(card_number):
        if i % 2 == 0:
            total += digit
        else:
            double_digit = digit * 2
            if double_digit > 9:
                total += double_digit - 9
            else:
                total += double_digit
    return total