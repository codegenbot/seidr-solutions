def luhn(card):
    card = list(map(int, str(card)))
    new_card = []
    for i in range(len(card)):
        if i % 2 == 0:
            new_card.append(card[i])
        else:
            new_card.append(card[i] * 2)
            if new_card[-1] > 9:
                new_card[-1] -= 9
    return sum(new_card)