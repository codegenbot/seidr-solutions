def luhn(card_number):
    card_number = map(int, card_number)
    doubled = [2 * x if i % 2 else x for i, x in enumerate(card_number)]
    return sum([x // 10 + x % 10 for x in doubled])