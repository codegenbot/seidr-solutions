def luhn(card):
    card = [int(x) for x in str(card)]
    result = sum((d * 2 % 10 if i % 2 != 0 else d) for i, d in enumerate(card))
    return result