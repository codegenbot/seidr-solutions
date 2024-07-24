def luhn(card_number):
    card_number = [int(x) for x in card_number]
    result = sum(((i * 2) if i % 2 == 0 else i) - ((i * 2) // 10) if (i * 2) > 9 else ((i * 2)) for i in card_number)
    return str(result)