def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number.reverse()
    result = sum([i * 2 - 9 if i * 2 > 9 else i * 2 if i % 2 else i for i in card_number])
    return result % 10 == 0