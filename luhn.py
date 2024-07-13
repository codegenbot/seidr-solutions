def luhn(card):
    card = [int(x) for x in str(card)]
    result = sum(
        (
            int(d)
            if i % 2 == 0
            else int(9 - d) if (i + 1) // 2 % 2 and int(d) > 4 else int(d)
        )
        for i, d in enumerate(card)
    )
    return result