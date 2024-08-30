def luhn(card):
    card = [int(x) for x in str(card)[1:]]
    card[::2] = [d * 2 if d * 2 > 9 else d * 2 for d in card[::2]]
    return sum(card)