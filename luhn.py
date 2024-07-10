def luhn(card):
    card = [int(i) for i in str(card)]
    if len(card) != 16:
        return sum([card[i] * 2 if i % 2 == 1 else card[i] for i in range(0, len(card))])