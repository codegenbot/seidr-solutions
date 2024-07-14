def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number.reverse()
    sum = 0
    alt = False
    for i, v in enumerate(card_number):
        if alt: 
            v *= 2
            sum += v if v < 10 else v - 9
        else:
            sum += v
        alt = not alt
    return sum % 10