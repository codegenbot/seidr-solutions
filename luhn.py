def luhn(card_number):
    card_number = list(map(int, str(card_number)[1:]))
    doubled = [i * 2 if i % 2 != 0 else i for i in card_number]
    return sum([int(str(i // 10 + i % 10)) if i > 9 else i for i in doubled])