def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    doubled = [i * 2 if (index := i) % 2 == 0 else i for index, i in enumerate(card_number)]
    return sum([i // 10 + i % 10 if i > 9 else i for i in doubled])