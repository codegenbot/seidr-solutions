def luhn(card_num):
    card_num = [int(x) for x in str(card_num)]
    sum_of_digits = 0
    for i, digit in enumerate(card_num):
        if i % 2 == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum_of_digits += digit
    return sum_of_digits