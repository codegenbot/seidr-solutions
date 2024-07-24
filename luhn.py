```
def luhn(card):
    card = [int(x) for x in str(card)]
    check_sum = 0
    for i in range(0, len(card)):
        if i % 2 == 1:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        check_sum += card[i]
    return check_sum