def luhn(card_number):
    card_number = [int(x) for x in card_number[2:]]
    total = sum([sum(divmod(d * 2, d)) + d for i, d in enumerate(card_number)][1:])
    return str(total)