```
def luhn(card):
    card = [int(x) for x in str(card)]
    sum = 0
    is_second = False
    for i in range(len(card)):
        if is_second:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
            is_second = False
        else:
            sum += card[i]
            is_second = True
    return sum