def luhn(card):
    card = [int(x) for x in str(card)]
    result = sum(2 * int(x) if i % 2 else int(x) for i, x in enumerate(card)) - sum(
        int(x) // 10 + int(x) % 10 for x in (str(2 * y) for y in card[1::2])
    )
    return str(result)