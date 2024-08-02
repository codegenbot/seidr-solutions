def luhn(card):
    card = list(map(int, card.split()))
    result = sum(
        sum(divmod(d * 2, 10)) + d for i, d in enumerate(card) if i % 2 == 0
    ) + sum(divmod(d, 10) for d in card[1:] if i % 2 != 0)
    return result