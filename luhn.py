def luhn(card):
    card = [int(x) for x in str(card).split()]
    result = sum(
        [
            x if i % 2 == 0 else int((10 - x % 10)) // 10 * 2 + x % 10
            for i, x in enumerate(card)
        ]
    )
    return str(result)