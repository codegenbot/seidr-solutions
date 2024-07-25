def luhn(card):
    card = [int(x) for x in str(card)]
    new_card = []
    for i, x in enumerate(card):
        if i % 2 == 0:
            new_card.append(x)
        else:
            new_card.append(x * 2)
    for i, x in enumerate(new_card):
        if x > 9:
            new_card[i] = x - 9
    return sum(new_card)