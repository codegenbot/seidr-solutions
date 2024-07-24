def luhn(card):
    card = [int(x) for x in str(card)]
    double = False
    total = 0
    for i in range(len(card)):
        if double:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        double = not double
    return sum(card)