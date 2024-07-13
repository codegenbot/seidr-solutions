def luhn(card_number):
    card_number = [int(i) for i in str(card_number)]
    doubled = card_number[1::2]
    summed = [(i * 2) if i * 2 > 9 else (i * 2) for i in doubled]
    return sum(summed) + sum([i for i in card_number[::2]])