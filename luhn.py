def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    doubled = [i * 2 if i % 2 else i for i in card_number]
    result = sum([i // 10 + i % 10 if i > 9 else i for i in doubled])
    return (result % 10) == 0