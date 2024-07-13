def luhn(card):
    card = list(map(int, card.split()))
    res = sum(
        [
            i if i < 5 else i - 9
            for i in [card[0] % 2 == 1 and 2 * card[0] or card[0]]
            + [2 * c if i % 2 != 0 else c for i, c in enumerate(card[1:])]
        ]
    )
    return str(res)