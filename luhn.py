def luhn(card):
    card = [int(x) for x in str(card).split()]
    total_sum = 0
    for i, digit in enumerate(reversed(card)):
        if i % 2 == 1:
            double_digit = digit * 2
            if double_digit > 9:
                double_digit -= 9
        else:
            double_digit = digit
        total_sum += double_digit
    return str(total_sum)