```
def luhn(card):
    card = [int(x) for x in str(card)]
    total = 0
    for i in range(len(card)-1, -1, -1):
        if i % 2 == 1:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        total += card[i]
    return total