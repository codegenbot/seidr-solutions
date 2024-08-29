def luhn(card):
    card = list(map(int, str(card)))
    for i in range(1, len(card), 2):
        card[i] *= 2
        if card[i] > 9:
            card[i] -= 9
    return sum(card)