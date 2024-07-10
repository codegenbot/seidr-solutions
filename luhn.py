def luhn(card):
    card = [int(i) for i in str(card)]
    if len(card) != 16:
        return sum(
            [x if i % 2 == 0 else (9 * (x % 10)) + x // 10 for i, x in enumerate(card)]
        )