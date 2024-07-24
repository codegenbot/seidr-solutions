def luhn(card):
    card = list(map(int, card))
    total = 0
    for i in range(len(card) - 1):
        if (i) % 2 == 0:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        total += card[i]
    total += card[-1]
    return total