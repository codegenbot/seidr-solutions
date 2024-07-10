def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    card_sum = 0
    for i, digit in enumerate(card_number):
        if i % 2 == 0:
            card_sum += digit
        else:
            doubled_digit = digit * 2
            if doubled_digit > 9:
                card_sum += doubled_digit - 9
            else:
                card_sum += doubled_digit
    return card_sum