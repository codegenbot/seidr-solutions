def luhn(card):
    card = [int(x) for x in str(card)]
    result = sum(
        [
            (
                card[i]
                if i % 2 == 0
                else 2 * card[i] if 2 * card[i] >= 10 else 2 * card[i] - 9
            )
            for i in range(16)
        ]
    )
    return result