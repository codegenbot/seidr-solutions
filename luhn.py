def luhn(card):
    card = [int(i) for i in str(card)]
    return sum(
        [
            x if i % 2 == 0 else (x * 2) % 10 - (x * 2) // 10 >= 5 and (x * 2) % 10 or (x * 2) % 10 for i, x in enumerate(card)
        ]
    )