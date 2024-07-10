def luhn(card):
    card = [int(i) for i in card.replace(' ', '')]
    result = sum([x if (i % 2 == 0) else x * 2 - (x > 9)*9 for i, x in enumerate(map(int, card))])
    return str(result)