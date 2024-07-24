def luhn(card_number):
    card_number = [int(x) for x in card_number]
    return str(sum([i * 2 - 9 if i % 2 == 0 and (i * 2) > 9 else i * 2 if i % 2 == 0 else i for i in reversed(card_number)]))