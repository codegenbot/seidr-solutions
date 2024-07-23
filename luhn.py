def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    double = False

    for i, digit in enumerate(card_number):
        if double:
            doubled_digit = digit * 2
            if doubled_digit > 9:
                total += doubled_digit // 10 + doubled_digit % 10
            else:
                total += doubled_digit
            double = False
        else:
            total += digit
            if i < len(card_number) - 1:  
                double = True

    return total