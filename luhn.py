def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number.reverse()
    result = sum([i * 2 if i % 2 else i if (i * 2) // 10 > 9 else i * 2 for i in card_number])
    return result