def luhn(card):
    card = [int(x) for x in str(card)]
    total = sum(2 * x if i % 2 else x for i, x in enumerate(reversed(card)))
    return str((total - 9 * (total // 9)) % 10)