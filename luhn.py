def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    return sum(sum(divmod(i*2,10)) + [i for i in card_number[1::2]])