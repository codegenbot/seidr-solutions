def luhn(card):
    card = [int(x) for x in str(card).replace(" ", "") if x.isdigit()]
    if len(card) < 15:
        return sum(card)
    card += [0] * (16 - len(card))
    total = 0
    for i, n in enumerate(card[::-1]):
        n *= 2
        if n > 9:
            n -= 9
        total += n
    return total