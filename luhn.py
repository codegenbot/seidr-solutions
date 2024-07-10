def luhn(card_number):
    total = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            double_digit = int(card_number[i]) * 2
            if double_digit > 9:
                total += double_digit - 9
            else:
                total += double_digit
        else:
            total += int(card_number[i])
    return total