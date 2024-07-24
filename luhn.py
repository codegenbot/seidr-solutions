def luhn(card_number):
    card_number = [int(x) for x in card_number]
    card_number = [i * 2 if i % 2 != 0 else i for i in card_number]
    card_number = [i - 9 if i > 9 else i for i in card_number]
    return str(sum(card_number))