def luhn(card_number):
    card_number = list(map(int, card_number))
    new_card_number = []
    for i, val in enumerate(reversed(card_number)):
        if (i % 2 == 0 and val % 2 == 0) or i % 2 != 0:
            new_card_number.append(val)
        else:
            new_card_number.append((val * 2) % 10 if val * 2 > 9 else val * 2)
    return sum(new_card_number)