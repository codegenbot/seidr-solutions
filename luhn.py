def luhn(card):
    card = [int(x) for x in card.split()]
    result = sum(2 * int(x) if i % 2 else int(x) for i, x in enumerate(card)) - sum(
        digit // 10 + digit % 10 for digit in (2 * int(x) for x in card[1::2])
    )
    return str(result)