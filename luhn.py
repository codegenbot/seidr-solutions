def luhn(card):
    card = [int(x) for x in str(card)]
    result = (
        sum(
            sum(divmod(d * 2, 10)) + d
            for i, d in enumerate(reversed(card[1:]))
            if i % 2 != 0
        )
        + card[0]
    )
    return abs(result) % 10