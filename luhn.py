def luhn(card_number):
    card_number = list(map(int, card_number))
    doubled = [i * 2 if i % 2 else i for i in card_number]
    return sum([int(str(i).sum()) if i > 9 else i for i in doubled])