def luhn(card):
    card = [int(x) for x in str(card)]
    card_sum = sum([x if i % 2 == 0 else 2*x if x*10 // 9 > 4 else 2*x - 9 for i, x in enumerate(reversed(card))])
    return card_sum