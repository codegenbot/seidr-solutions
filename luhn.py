def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    for i, v in enumerate(card_number):
        if (i+1)%2 == 1:
            v *= 2
            if v > 9:
                v -= 9
        sum += v
    return sum