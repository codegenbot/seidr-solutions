```
def luhn(card):
    card = [int(x) for x in str(card)]
    sum_card = 0
    for i in range(len(card)):
        if i % 2 == 1:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        sum_card += card[i]
    return sum_card