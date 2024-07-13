def luhn(card):
    card = list(map(int, card))
    new_card = []
    for i, n in enumerate(card):
        if (i % 2) == 1:
            n *= 2
            if n > 9:
                n -= 9
        new_card.append(n)
    return sum(new_card)