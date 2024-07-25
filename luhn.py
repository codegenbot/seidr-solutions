def luhn(card):
    card = [int(x) for x in str(card).split()]
    result = sum(
        int(x) if i % 2 == 0 else int(x) * 2 if int(x) * 2 > 9 else int(x) * 2 - 9
        for i, x in enumerate(card)
    )
    return result