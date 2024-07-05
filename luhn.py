def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    doubled_sum = sum([i * 2 if i % 2 == 0 else i for i in card_number])
    return sum([i - 9 if i > 9 else i for i in [x for x in map(int, str(doubled_sum))]])