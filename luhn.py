def luhn(card):
    card = [int(x) for x in str(card)[1:-1].split()]
    result = sum(2 * int(x) if i % 2 != 0 else int(x) for i, x in enumerate(card))
    return str(result)