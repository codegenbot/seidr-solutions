def luhn(card_number):
    card_number = list(map(int, card_number))
    result = sum([i if i * 2 > 9 else i * 2 for i in card_number[1::2]]) + sum(
        card_number[::2]
    )
    return str(result)