def luhn(card):
    card = [int(x) for x in str(card)]
    res = sum(
        (
            int(d)
            if i % 2
            else 2 * int(d) if 1 <= i % 2 < 9 else 2 * int(d) - 9 if i % 2 == 0 else 0
        )
        for i, d in enumerate(card)
    )
    return res