def luhn(card):
    card = list(map(int, card[1:]))
    doubled = [i * 2 if i % 2 else i for i in card]
    summed = sum([d - 9 if d > 9 else d for d in doubled])
    return str(summed)