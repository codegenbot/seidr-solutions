def luhn(card):
    card = list(map(int, card))
    card.reverse()

    for i in range(1, len(card)):
        if i % 2 != 0:
            continue
        else:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9

    return sum(card)