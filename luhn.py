```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    alt = True
    for i, v in enumerate(card_number):
        if i % 2 == 1 and not alt:
            v *= 2
            if v > 9:
                v -= 9
        sum += v
        alt = not alt
    return sum