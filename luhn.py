def luhn(card):
    card = list(map(int, card.split()))
    result = (
        sum(
            sum(divmod(x * 2, 10)) + x
            for i, x in enumerate(reversed(card[1:]))
            if (i + 1) % 2 != 0
        )
        + card[0]
    )
    return str(result)