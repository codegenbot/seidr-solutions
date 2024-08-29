```
def luhn(card_num):
    card_num = [int(x) for x in str(card_num)]
    sum = 0
    for i in range(1, len(card_num), 2):
        card_num[i] *= 2
        if card_num[i] > 9:
            card_num[i] -= 9
    for i in range(len(card_num)):
        sum += card_num[i]
    return sum