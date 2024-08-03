def luhn(card):
    card = list(map(int, card.split()))
    result = sum(sum(divmod(x * 2, 10)) + x for i, x in enumerate(card) if i % 2 != 0)
    return str(result).zfill(2)