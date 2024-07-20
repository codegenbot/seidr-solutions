Here is the solution:

def luhn(card):
    card = list(map(int, str(card)))
    for i in range(len(card)-1, 0, -1):
        if (i) % 2 == 0:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
    return sum(card)