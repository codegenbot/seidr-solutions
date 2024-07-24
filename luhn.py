def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum([i * 2 // 10 + i % 2 if i % 2 == 0 else i for i in card_number])
    return str(result)