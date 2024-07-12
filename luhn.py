def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    return sum((d * 2 > 9 and d * 2 - 9 or d * 2) % 10 if i % 2 else int(d) for i, d in enumerate(card_number)) % 10