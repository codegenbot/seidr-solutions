def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    return str(sum(((i * 2) if i % 2 == 0 else i) - 9 if ((i * 2) if i % 2 == 0 else i) > 9 else ((i * 2) if i % 2 == 0 else i)) % 10)