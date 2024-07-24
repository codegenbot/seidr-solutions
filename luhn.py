```
def luhn(card):
    card = list(map(int, card))
    for i in range(len(card)):
        if i == 0 and len(card) % 2 != 0:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        elif i % 2 == 0:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
    return sum(card)