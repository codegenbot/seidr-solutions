def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    return sum(i if i * 2 > 9 else i * 2 for i in card_number[1::2]) + sum(
        card_number[::2]
    )