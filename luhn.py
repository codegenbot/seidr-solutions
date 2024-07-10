def luhn(card):
    card = [int(i) for i in str(card)]
    if len(card) != 16:
        return 
    result = sum(
        [
            (x * 2) % 10 if i % 2 != 0 or x > 4 else x
            for i, x in enumerate(card)
        ]
    )
    return