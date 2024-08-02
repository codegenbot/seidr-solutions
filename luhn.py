def luhn(card):
    card = [int(x) for x in str(card)]
    result = sum(
        [
            x if i % 2 == 0 else 2 * x if x * 10 // 9 < 9 else 2 * x - 9
            for i, x in enumerate(card)
        ]
    )
    return result