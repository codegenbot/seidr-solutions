def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    card_number[::2] = [x * 2 if x * 2 >= 10 else x * 2 for x in card_number[::2]]
    return sum([x - 9 if x > 9 else x for x in card_number])