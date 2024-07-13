def luhn(card):
    card = [int(x) for x in card.replace(' ', '')]
    sum_of_digits = 0
    for i, digit in enumerate(card):
        if (i % 2 == 1 and digit * 2 >= 10):
            sum_of_digits += (digit * 2) % 10
        elif i % 2 == 1:
            sum_of_digits += digit * 2
        else:
            sum_of_digits += digit
    if sum_of_digits >= 10:
        return sum_of_digits % 10
    else:
        return sum_of_digits