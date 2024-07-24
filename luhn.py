def luhn(card):
    card = list(map(int, card))
    doubled = False
    for i in range(len(card)):
        if doubled:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
            doubled = False
        else:
            doubled = True
    return sum(card)