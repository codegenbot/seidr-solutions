def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    return sum([i if i % 2 == 0 else i * 2 for i in card_number]) if len(card_number) != 16 else sum([x - 9 if x > 9 else x for x in [i if i % 2 == 0 else i * 2 for i in card_number][1:]] + [card_number[0]])