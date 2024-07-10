def luhn(card):
    card = [int(i) for i in str(card)]
    return sum([x if i % 2 != 0 else (2 * x) - ((2 * x) // 10) * 9 if (2 * x) > 9 else 2 * x for i, x in enumerate(card)])