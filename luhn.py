def luhn(card):
    card = [int(x) for x in str(card)[1:-1].split()]
    return sum([x if i % 2 == 0 else int(str((x*2).strip('0'))) for i, x in enumerate(reversed(card))])