def luhn(card):
    card = [int(i) for i in str(card)]
    new_card = []
    for i in range(len(card)):
        if (i % 2) == 1:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        new_card.append(card[i])
    return sum(new_card)