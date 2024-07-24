def luhn(card):
    card = list(map(int, card))
    card[0] *= 2 if len(card) % 2 == 1 else 1
    for i in range(1, len(card)):
        if i % 2 == 0:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
    return sum(card)