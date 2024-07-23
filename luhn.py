def luhn(card):
    card = list(map(int, card.replace(" ", "")))
    total = 0
    for i in range(len(card)):
        if (i % 2 == 1 and card[i] * 2 >= 10):
            card[i] -= 9
        else:
            card[i] *= 2 if i % 2 != 0 else 1
        total += card[i]
    return total