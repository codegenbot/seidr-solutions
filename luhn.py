```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    is_double = False
    for i in range(len(card_number)):
        if is_double:
            if card_number[i] * 2 > 9:
                card_number[i] = card_number[i] * 2 - 9
            else:
                card_number[i] *= 2
            is_double = False
        else:
            sum += card_number[i]
            is_double = not is_double
    for i in range(len(card_number)):
        sum += card_number[i]
    return sum % 10