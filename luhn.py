```
def luhn(card_num):
    card_num = [int(x) for x in str(card_num)[1:-1].split()]
    total = 0
    for i in range(len(card_num)):
        if (i % 2 == 0):
            card_num[i] *= 2
            if card_num[i] > 9:
                card_num[i] -= 9
        total += card_num[i]
    return total