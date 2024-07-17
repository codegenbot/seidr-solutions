def luhn(card):
    card = [int(x) for x in card.split()]
    total = 0
    for i in range(1, len(card), 2):
        double = card[i] * 2
        if double > 9:
            total += double - 9
        else:
            total += double
    for i in range(0, len(card), 2):
        total += card[i]
    return str(total)