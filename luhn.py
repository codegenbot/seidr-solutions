def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    alt = True
    for i, v in enumerate(card_number):
        if alt: 
            if v * 2 >= 10:
                sum += (v * 2) % 10
            else:
                sum += v * 2
        else:
            sum += v
        alt = not alt
    return 10 - sum % 10 if sum % 10 > 0 else sum % 10