def luhn(card):
    card = [int(x) for x in str(card).split()]
    result = sum([2 * x if i % 2 else x for i, x in enumerate(card)])
    return (result - ((result // 10 + 1) % 10 * 9)) % 10