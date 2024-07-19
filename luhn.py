def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    card_number[1::2] = [2 * i for i in card_number[1::2]] if any(i > 4 for i in card_number[1::2]) else card_number[1::2]
    return sum((i % 10) + (i // 10) if isinstance(i, int) and i > 9 else i for i in card_number)