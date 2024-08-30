```
def luhn(card):
    card = [int(x) for x in str(card)]
    sum = 0
    for i in range(len(card)):
        if len(card) - i - 1 % 2 == 0:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        sum += card[i]
    return sum