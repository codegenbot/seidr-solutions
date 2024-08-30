```
def luhn(card):
    card = [int(x) for x in str(card)]
    sum = 0
    for i in range(len(card)):
        if (i + 1) % 2 == 1:
            if i != len(card)-1:
                card[i] *= 2
                if card[i] > 9:
                    card[i] -= 9
        else:
            if i == len(card)-1:
                card[i] *= 2
                if card[i] > 9:
                    card[i] -= 9
        sum += card[i]
    return sum