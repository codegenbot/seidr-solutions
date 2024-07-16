def luhn(card):
    card = list(map(int, card.split()))
    for i in range(len(card)):
        if i % 2 == 1:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
    return sum(card)