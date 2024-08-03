def luhn(card_number):
    card_number = list(map(int, card_number[1:]))
    result = sum([i * 2 if i % 2 else i for i in card_number])
    return str(result % 10)