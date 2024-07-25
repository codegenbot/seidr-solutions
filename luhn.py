def luhn(card):
    card = [int(x) for x in str(card)]
    result = sum(
        sum(divmod(d * 2, 10)) if i % 2 else d for i, d in enumerate(reversed(card))
    )
    return result