def luhn(card):
    card = [int(x) for x in str(card)]
    result = sum(
        [
            (
                card[i]
                if i % 2 == 0
                else card[i] * 2 if card[i] * 2 > 9 else card[i] * 2 - 9
            )
            for i in range(len(card))
        ]
    )
    return result