def luhn(card):
    card = [int(x) for x in str(card).split()]
    result = sum(
        int(d) if i % 2 == 0 else int(d) * 2 if int(d) * 2 >= 10 else int(d) * 2 - 9
        for i, d in enumerate(card)
    )
    return result