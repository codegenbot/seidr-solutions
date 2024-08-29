def luhn(card):
    card = list(map(int, str(card)))
    result = sum(2 * int(d) if i % 2 else int(d) for i, d in enumerate(card)) - sum(
        int(x) // 10 + int(x) % 10
        for x in (str(2 * int(d)) for i, d in enumerate(card)[1::2])
    )
    return result