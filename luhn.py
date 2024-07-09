````
def luhn(card_num):
    card_num = list(map(int, card_num))
    total = 0
    for i in range(len(card_num)):
        if i % 2 == 1:
            card_num[i] *= 2
            if card_num[i] > 9:
                card_num[i] -= 9
        total += card_num[i]
    return total % 10 == 0