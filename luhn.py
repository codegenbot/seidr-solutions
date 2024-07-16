```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum_digits = 0
    is_double = True
    for i in range(len(card_number)):
        if is_double:
            if card_number[i] * 2 > 9:
                card_number[i] *= 2 - 9
            else:
                card_number[i] *= 2
        sum_digits += card_number[i]
        is_double = not is_double
    return sum_digits % 10