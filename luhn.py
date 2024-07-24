def luhn(card_number):
    card_number = [int(x) for x in card_number]
    result = sum((2 * i if i % 2 == 0 else i) % 10 for i in card_number)
    return str(result)