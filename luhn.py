def luhn(card):
    card = [int(i) for i in str(card)]
    if len(card) != 16:
        return "Invalid card number"
    result = sum(
        [
            x if i % 2 == 0 else (x * 2) % 10 + (x * 2 >= 9) * 9
            for i, x in enumerate(card)
        ]
    )
    return str(result)