Here is the solution:

def luhn(card):
    card = list(map(int, card[1:]))
    for i in range(len(card)):
        if i % 2 == 0:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
    return sum(card)